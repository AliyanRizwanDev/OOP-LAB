#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class DATA
{
public:
	string Docid[50], Docname[50], Patid[50], Patname[50], Patappont[50], Appointmentdate[50], Nurid[50], Nurname[50], Work[50];
	int Rate[50];
	void displayrecord();
	void enterrecord();
	void searchrecord();
};
void DATA::displayrecord()
{
	ifstream fin;
	fin.open("data.txt");
	if (!fin.is_open())
	{
		cout << "File not Found" << endl;
	}
	else
	{
		while (!fin.eof())
		{
			for (int i = 0; i < 7; i++)
			{
				fin >> Docid[i]>> Docname[i]  >> Patid[i]  >> Patname[i]  >> Patappont[i]  >> Appointmentdate[i]  >> Nurid[i]  >> Nurname[i]  >> Work[i]  >> Rate[i];
				cout << Docid[i]  << Docname[i]  << Patid[i]  << Patname[i]  << Patappont[i]  << Appointmentdate[i]  << Nurid[i]  << Nurname[i]  << Work[i]  << Rate[i] << endl;
			}
		}
	}
	fin.close();
}
void DATA::searchrecord()
{
	int search, cho = 0;
	cout << "1  Record number" << endl;
	cout << "2  name of Doctor" << endl;
	cout << "3 the value of specific record" << endl;
	cout << "4 Delete a specific record" << endl;
	cout << "Search By:";
	cin >> cho;
	ifstream fin;
	fin.open("data.txt");
	if (!fin.is_open())
	{
		cout << "File not Found" << endl;
	}
	else
	{
		while (!fin.eof())
		{
			for (int i = 0; i < 7; i++)
			{
				fin >> Docid[i] >> Docname[i] >> Patid[i] >> Patname[i] >> Patappont[i] >> Appointmentdate[i] >> Nurid[i] >> Nurname[i] >> Work[i] >> Rate[i];
			}
			if (cho==1)
			{
				cout << "Record # you want to search:";
				cin >> search;
			for (int i = 0; i < 7; i++)
			{
				if (i == search)
				{
					cout << Docid[i] << Docname[i] << Patid[i] << Patname[i] << Patappont[i] << Appointmentdate[i] << Nurid[i] << Nurname[i] << Work[i] << Rate[i] << endl;
				}
			}	
			}
			else if (cho==2)
			{
				string find;
				cout << "Doctor you want to search:";
				cin >> find;
				for (int i = 0; i < 7; i++)
				{
					if (Docname[i] == find)
					{
						cout << Docid[i] << Docname[i] << Patid[i] << Patname[i] << Patappont[i] << Appointmentdate[i] << Nurid[i] << Nurname[i] << Work[i] << Rate[i] << endl;
					}
				}
			}
			else if (cho==3)
			{
				int val;
				cout << "Record # you want to search:";
				cin >> search;
				cout << "Enter value to update Record:";
				cin >> val;
				for (int i = 0; i < 7; i++)
				{
					if (i == search)
					{
						Rate[i] = val;
						cout << Docid[i] << Docname[i] << Patid[i] << Patname[i] << Patappont[i] << Appointmentdate[i] << Nurid[i] << Nurname[i] << Work[i] << Rate[i] << endl;
					}
				}
			}
			else if (cho==4)
			{
				cout << "Record # you want to Delete:";
				cin >> search;
				for (int i = 0; i < 7; i++)
				{
					if (i == search)
					{
						cout << Docid[i] << Docname[i] << Patid[i] << Patname[i] << Patappont[i] << Appointmentdate[i] << Nurid[i] << Nurname[i] << Work[i] << Rate[i] << endl;
					}
				}
			}
		}
	}
	fin.close();
}
void DATA::enterrecord()
{
	ofstream fout;
	fout.open("data1.txt", ios::app);
	if (!fout.is_open())
	{
		cout << "File not Found" << endl;
	}
	else
	{
		cout << "Enter  New Record:"<<endl;
		for (int i = 0; i < 1; i++)
		{
			cout << "Doc ID:";
			cin >> Docid[i];
			cout << "Doc Name:";
			cin >> Docname[i];
			cout << "Pat ID:";
			cin >> Patid[i];
			cout << "Pat Name:";
			cin >> Patname[i];
			cout << "Pat Appont:";
			cin >> Patappont[i];
			cout << "Appointment Date:";
			cin >> Appointmentdate[i];
			cout << "Nur ID:";
			cin >> Nurid[i];
			cout << "Nur Name:";
			cin >> Nurname[i];
			cout << "Work:";
			cin >> Work[i];
			cout << "Rate:";
			cin >> Rate[i];
			fout << Docid[i] << "," << Docname[i] << "," << Patid[i] << "," << Patname[i] << "," << Patappont[i] << "," << Appointmentdate[i] << "," << Nurid[i] << "," << Nurname[i] << "," << Work[i] << "," << Rate[i]<<endl;
		}
	}
	fout.close();
}
int main()
{
	DATA d;

	int choice=0;
	cout << "1 Read and Display the file." << endl;
	cout << "2 Display the user required specific record." << endl;
	cout << "3 Display the appointments of specific doctors." << endl;
	cout << "4 Sort the data on nurse name." << endl;
	cout << "5 Name of Doctors who earn more than 1200." << endl;
	cout << "6 Display record with cost less than 800." << endl;
	cout << "7 Add a new record." << endl;
	cout << "8 Delete a record and update the file." << endl;
	cout << "9 Change the value of cost from the specific record." << endl;
	cout << "Enter your choice:";
	cin >> choice;
	if (choice == 1)
	{
		d.displayrecord();
	}
	else if (choice==2|| choice == 3|| choice == 8|| choice == 9)
	{
		d.searchrecord();
	}
	else if (choice==4)//sort data with nurse name
	{

	}
	else if (choice==5)//doctor with earning more than 1200
	{

	}
	else if (choice == 6)//record with cost less than 800
	{
	
	}
	else if (choice == 7)
	{
		d.enterrecord();
	}
	return 0;
}
