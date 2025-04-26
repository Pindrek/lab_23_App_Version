#pragma once
#include "App.hpp"

namespace Group
{
	class Student
	{
	private:
		int16_t numberStudent_;
		string name_;
		string surname_;
		float averageScore_;
	public:
		Student(const int16_t& numberStudent, const string& name, const string& surname, const float& averageScore) : numberStudent_(numberStudent), name_(name), surname_(surname), averageScore_(averageScore) {}

		int16_t GetNumberStudent() const { return numberStudent_; }
		string GetName() const { return name_; }
		string GetSurname() const { return surname_; }
		float GetAverageScore() const { return averageScore_; }

		void Print() const {
			cout << endl << "-------------------------------------" << endl;
			cout << "Number:\t" << numberStudent_ << endl;
			cout << "Student name:\t" << name_ << endl;
			cout << "Student surname:\t" << surname_ << endl;
			cout << "Average score:\t" << averageScore_ << endl;
			cout << "-------------------------------------" << endl;
		}
	};
}