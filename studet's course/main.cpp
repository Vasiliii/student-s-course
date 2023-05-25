#include <iostream>

using namespace std;

class Student
{
public:

	//add the completed course to the record
	double addcourse(int hours, double grade)
	{
		//calculate the average grade taking into account the time of different courses
		double weightedGPA;
		weightedGPA = semesterHours * gpa;
		//add new course
		semesterHours += hours;
		weightedGPA += grade * hours;
		gpa = weightedGPA / semesterHours;
		
		return gpa;
	}

	int semesterHours;
	double gpa;
};

int main()
{
	int userGpa, userHours;
	Student s;
	s.semesterHours = 10;
	s.gpa = 3.0;

	//the value before calling the member function
	cout << "Befor studet s: hours = " << s.semesterHours << "\tgpa = " << s.gpa << endl;

	s.addcourse(3, 4.0);//calling member function

	//changed values
	cout << "After studet s: hours = " << s.semesterHours << "\tgpa = " << s.gpa << endl;

	cout << "=============================================\n" << endl;

	Student t;
	cout << "Enter the initial number of student hours \"t\"" << endl;
	cin >> t.semesterHours;
	cout << "Enter the student's average grade of student \"t\"" << endl;
	cin >> t.gpa;

	cout << "Befor studet t: hours = " << t.semesterHours << "\tgpa = " << t.gpa << endl;

	cout << "Enter hours of new course" << endl;
	cin >> userHours;
	cout << "Enter gpa of new course" << endl;
	cin >> userGpa; 

	t.addcourse(userHours, userGpa);

	cout << "After studet t: hours = " << s.semesterHours << "\tgpa = " << t.gpa << endl;

	//waiting allowing the user to see the 
	//result of the program
	cout << "Press enter for continue..." << endl;
	cin.ignore(10, '\n');
	cin.get();

	return 0;
}