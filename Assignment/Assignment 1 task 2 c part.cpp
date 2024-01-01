#include <iostream>
using namespace std;
class Employee
{
public:
	char var;
	char var1;
	void  employee(char var, char var1)
	{
		cout << "Enter Variable one: ";
		cin >> var1;
		cout << "Enter Variable two: ";
		cin >> var;
		cout << var << var1 << endl;

	}
	Employee()
	{}
	Employee(char var, char var1)
	{
		var = 0;
		var1 = 0;
	}

};

int main()
{
	char var = '\0';
	char var1 = '\0';
	Employee e1;
	e1.employee(var, var1);
	return 0;
}