#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

class studentPersonalInfo
{
	string name;
	string rollno;
	string course;

public:
	void getStudentInfo()
	{
		cout << "Enter student name: ";
		getline(cin, name);
		cout << "Enter student roll number: ";
		getline(cin, rollno);
		cout << "Enter student course: ";
		getline(cin, course);
	}
	void displayStudentInfo()
	{
		cout << "\n" << name << "’s Mark Sheet" << endl;
		cout << "Student name: " << name << endl;
		cout << "Student roll number: " << rollno << endl;
		cout << "Student course: " << course << endl;
	}
};

class Grade_Calculation {
	string paper;
	int marks;
	string grade;

public:
	void getGrade()
	{
		cout << "Enter paper name: ";
		cin >> paper;
		cout << "Enter marks: ";
		cin >> marks;
		if (marks >= 50)
			grade = "Pass";
		else
			grade = "Fail";
	}
	void displayGrade()
	{
		cout << left << setw(25) << paper << setw(15) << marks << setw(10) << grade << endl;
	}
	string getGradeValue() {
		return grade;
	}
};

int main() {
	studentPersonalInfo student;
	Grade_Calculation grade1;
	Grade_Calculation grade2;
	Grade_Calculation grade3;
	student.getStudentInfo();
	grade1.getGrade();
	grade2.getGrade();
	grade3.getGrade();
	student.displayStudentInfo();
	cout << "\n" << left << setw(25) << "Paper" << setw(15) << "Marks" << setw(10) << "Grade" << endl;
	cout << string(50, '*') << endl;
	grade1.displayGrade();
	grade2.displayGrade();
	grade3.displayGrade();
	if (grade1.getGradeValue() == "Fail" || grade2.getGradeValue() == "Fail" || grade3.getGradeValue() == "Fail")
		cout << "Overall grade           : Fail" << endl;
	else
		cout << "Overall grade           : Pass" << endl;
}