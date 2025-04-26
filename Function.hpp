#pragma once
#include "student.hpp"

namespace Group
{
	void AddStudent(vector<Student>& students)
	{
		int16_t number;
		string name, surname;
		float averageScore;

		cout << "Enter number:\t";
		cin >> number;
		cout << "Enter name:\t";
		cin >> name;
		cout << "Enter surname:\t";
		cin >> surname;
		for (int i = 0; i != 1;)
		{
			cout << "Enter average score:\t";
			cin >> averageScore;
			if (averageScore > 100) "Max score = 100";
			else ++i;
		}

		students.push_back(Student(number, name, surname, averageScore));
	}

	void DeleteStudentByName(vector<Student>& students, const string& name)
	{
		students.erase(remove_if(students.begin(), students.end(), [name](const Student& s) {return s.GetName() == name;  }), students.end());
	}

	void PrintAllStudents(const vector<Student>& students)
	{
		for (const auto& student : students)
		{
			student.Print();
		}
	}

	void SaveToFile(const vector<Student>& students)
	{
		string filePath = GetFilePath();
		ifstream test(filePath + "\\Students.txt");
		if (test.bad())
		{
			ofstream outFile(filePath, ios::trunc);
			outFile.close();
		}
		ofstream outFile(filePath, ios::app);

		if (outFile.is_open()) 
		{
			for (const auto student : students)
			{
				outFile << "Number:\t" << student.GetNumberStudent() << endl;
				outFile << "Name:\t" << student.GetName() << endl;
				outFile << "Surname:\t" << student.GetSurname() << endl;
				outFile << "Average score:\t" << student.GetAverageScore() << endl;
				outFile << "-------------------------------------" << endl;
			}
			outFile.close();
			cout << "Student saved to file" << endl;
		}
		else
		{
			cout << "Error saving to file" << endl;
		}
	}
}