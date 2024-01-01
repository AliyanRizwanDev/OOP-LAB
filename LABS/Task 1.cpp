#include<iostream>
using namespace std;

int factoten(int TOTAL);
int main()
{
	int TOTAL=0;
	TOTAL = factoten(TOTAL);
	
	cout << "your factorial answer is =" << TOTAL << endl;
	return 0;
}
int factoten(int TOTAL)
{
	for (int i = 1; i <= 10; i++)
	{
		int sum1 = 1;
		for (int k = i; k >= 1; k--)
		{
			sum1 = sum1*k;
		}
		TOTAL = TOTAL + sum1;
	}
	return TOTAL;
}