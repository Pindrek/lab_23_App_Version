#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <Windows.h>
#include <shlobj.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;
using std::getline;
using std::wstring;
using std::ios;


wstring GetDesktopPath()
{
	PWSTR Path = nullptr;
	HRESULT hr = SHGetKnownFolderPath(FOLDERID_Desktop, 0, nullptr, &Path);
	wstring desktopPath;

	if (SUCCEEDED(hr))
	{
		desktopPath = Path;
		CoTaskMemFree(Path);
	}
	return desktopPath;
}

string GetFilePath()
{
	wstring desktopPath = GetDesktopPath();
	return string(desktopPath.begin(), desktopPath.end()) + "\\Students.txt";
}