#include<iostream>
using namespace std;


int main()
{

		int num, i, upto;

		cout << "Find prime numbers upto = ";
		cin >> upto;

		cout << endl << "All prime numbers upto " << upto << " are = ";

		for (num = 2; num <= upto; num++)
		{

			for (i = 2; i <= (num / 2); i++) 
			{

				if (num % i == 0) 
				{
					i = num;
					break;
				}
			}

			if (i != num)
			{
				cout << num << " ";
				
			}
		}

		return 0;
	}
	








