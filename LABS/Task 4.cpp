#include <iostream>
using namespace std;

int main()
{
	int no, number, dig; 
	int reverse = 0;
	cout << "Enter a number: ";
	cin >> number;

	no = number;

	do
	{
		dig = number % 10;
		reverse = (reverse * 10) + dig;
		number = number / 10;
	} while (number != 0);

	cout << " The reverse of the number is: " << reverse << endl;

	if (no == reverse)
		cout << " The number is a palindrome.";
	else
		cout << " The number is not a palindrome.";

	return 0;
}