#include "Function.hpp"

int main()
{
	vector<Group::Student> students;
	int choice;

	while (true)
	{
		cout << "\t\t Student Menu" << endl;
		cout << endl << "1.\tAdd Student" << endl;
		cout << "2.\tDelete Student by name" << endl;
		cout << "3.\tPrint all Student" << endl;
		cout << "4.\tSave" << endl;
		cout << "5.\tExit" << endl << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			AddStudent(students);
			break;
		case 2:
		{
			string name;
			cout << "Enter name to delete:\t";
			cin >> name;
			DeleteStudentByName(students, name);
			break;
		}
		case 3:
			PrintAllStudents(students);
			break;
		case 4:
			SaveToFile(students);
			break;
		case 5:
			return 0;
		default:
			cout << "Invalid choise, try again!" << endl;
			break;
		}
		cout << endl;
	}
}