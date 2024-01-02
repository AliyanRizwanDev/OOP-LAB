#include<iostream>
#include<string>
using namespace std;
class BankAccount{
public:
	string title;
	int accountNumber;
	int balance;
	int tem;
	int Deposit;
public:
	BankAccount(){
		
		accountNumber=0;
		balance=0;
		tem = 0;
		Deposit = 0;
	}
	void setT(string t)
	{
		this->title = t;
		

	}
	void setACN(int ACN)
	{
		this->accountNumber = ACN;
		
	
		
	}
	void setBal(int Bal){
		this->balance = Bal;
	}
	void deposit()
	{
		Deposit = balance;
	}
	void setwd(int wd){
		tem = wd;
	}
	void withdraw()
	{
		
		balance = Deposit - tem;
	}
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class SavingsAccount :public BankAccount{

public:
	int borrowMoney;
	int InterestRatePerDay;
	int days;
	int totalInterest;

public:
	SavingsAccount(){
		borrowMoney = 0;
		InterestRatePerDay = 256;
		totalInterest = 0;
		days = 0;
	}
	void setbM(int bM)
	{
		this->borrowMoney = bM;
	}
	void setdays(int d){
		this->days = d;
	}

	void CalculateInterest()
	{
		totalInterest = borrowMoney - (InterestRatePerDay*days);
	}

	void display()
	{
		cout << "the amount of interest on your borrowed money is: " << totalInterest << endl;
	}
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class CheckingAccount :public BankAccount
{
public:
	void Fee(int chargedPerTransaction)
	{
		cout << "the fee charged per transaction is: " << chargedPerTransaction << endl;

	}
	void Display()
	{
		cout << "your cuurent account balance after withdrawing is:" << balance << endl;

	}
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main(){
	BankAccount obj1;
	SavingsAccount Sobj1;
	CheckingAccount Cobj1;
	//for parent class
	int ac,b,temp;
	string t;
	cout << "enter your name: ";
	cin >> t;
	cout << "enter your account number(only in digits): ";
	cin >> ac;
	cout << "enter the money you want to deposit in your account: ";
	cin >> b;
	cout << "enter the amount of maoney you want to withdraw";
	cin >> temp;
	obj1.setT(t);
	obj1.setACN(ac);
	obj1.setBal(b);
	obj1.deposit();
	obj1.setwd(temp);
	obj1.withdraw();

	//for 1st derived class 
	int bm,day;
	cout << "enter the amount of money that you borrowed";
	cin >> bm;
	cout << "for how many days have you borowed the money ";
	cin >> day;
	Sobj1.setbM(bm);
	Sobj1.setdays(day);
	Sobj1.CalculateInterest();
	Sobj1.display();

	//for 2nd derived class
	int fee = 0;
	cout << "enter the amount of fee charged per transaction: ";
	cin >> fee;
	Cobj1.Fee(fee);
	Cobj1.Display();

	return 0;
}
