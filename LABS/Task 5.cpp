#include <iostream>
	using namespace std;
	int findmax(int a[], int n)
	{
		int i, max;
		max = a[0];
		for (i = 1; i<n; i++)
		{
			if (a[i]>max)
				max = a[i];
		}
		return max;
	}

	int findmin(int a[], int n)
	{
		int i, min;
		min = a[0];
		for (i = 1; i<n; i++)
		{
			if (a[i]<min)
				min = a[i];
		}
		return min;
	}
	int main()
	{
		int i, array[50], size, max, min;

		cout << "Input number of elements in array" << endl;;
		cin >> size;

		cout << "Enter " << size << " integers" << endl;
		for (i = 0; i<size; i++)
			cin >> array[i];

		max = findmax(array, size);
		min = findmin(array, size);
		cout << "Maximum element in the array is:" << max << endl;
		cout << "Minimum element in the array is:" << min << endl;

		return 0;
	}
