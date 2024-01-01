#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
	int Employee_id;
	string name;
	string department;
public:
	void input(int Employee_id, string name, string department)
	{
		cout << "Enter ID: ";
		cin >> Employee_id;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Department: ";
		cin >> department;
	}
	void display()
	{
		cout << name << Employee_id << department << endl;
	}
};

int main()
{
	int Employee_id = 0;
	string name;
	string department;
	Employee e;
	e.input(Employee_id, name, department);
	e.display();
	return 0;
}