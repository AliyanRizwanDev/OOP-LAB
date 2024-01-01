#include<iostream>
#include <string>
using namespace std;

class Bankaccount
{
	
	char*accounttitle;
	char*accountnumber;
	float blance;
	
public:
	
	Bankaccount();
	
	Bankaccount(char*, float);
	
	~Bankaccount();
	
	void display();
	float deposit();
	float  withdraw();
	void setAccounttitle(char*);
	char* getAccounttitle();
	void setAccountnumber(char*);
	char* getAccountnumber();
	void setBlance(float);
	float getBlance();
	Bankaccount(const Bankaccount &obj);
};

Bankaccount::Bankaccount()
{
	cout << endl;
}
Bankaccount::Bankaccount(char* x, float y)
{
	accountnumber = x;
	blance = y;

}

float Bankaccount::deposit()
{
	float dep;
	cout << "Enter amount you want to Deposit : " << endl;
	cin >> dep;
	blance = blance + dep;
	return blance;


}
float Bankaccount::withdraw()
{
	float withdraw;
	cout << "Enter amount you want to Withdraw : " << endl;
	cin >> withdraw;
	if(withdraw <= blance)
	{
		blance = blance - withdraw;
	}
	else
	{
		exit(0);
	}
	return blance;
}
void Bankaccount::setAccounttitle(char* at)
{
	int size = strlen(at);
	accounttitle = new char[size + 1];
	for(int i = 0; i < size; i++)
	{
		accounttitle[i] = at[i];
	}
	accounttitle[size] = '\0';
}
char* Bankaccount::getAccounttitle()
{
	char* a;
	int size = strlen(accounttitle);
	a = new char[size + 1];
	for(int i = 0; i < size; i++)
	{
		a[i] = accounttitle[i];
	}
	a
		[size] = '\0';
	return a;
}
void Bankaccount::setAccountnumber(char* an)
{
	int size = strlen(an);
	accountnumber = new char[size + 1];
	for(int i = 0; i < size; i++)
	{
		accountnumber[i] = an[i];
	}
	accountnumber[size] = '\0';
}
char* Bankaccount::getAccountnumber()
{
	char* n;
	int size = strlen(accountnumber);
	n = new char[size + 1];
	for(int i = 0; i < size; i++)
	{
		n[i] = accountnumber[i];
	}
	n[size] = '\0';
	return n;
}
void Bankaccount::setBlance(float b)
{
	blance = b;
}

float Bankaccount::getBlance()
{
	return blance;
}
void Bankaccount::display()
{
	cout << "Account Title" << ":" << accounttitle << endl;
	cout << "Balance :"<< blance << endl;
}

Bankaccount::~Bankaccount()
{
	delete[] accountnumber;
	delete[] accounttitle;
}

Bankaccount::Bankaccount(const Bankaccount& obj)
{
	setAccounttitle(obj.accounttitle);
	setAccountnumber(obj.accountnumber);
	blance = obj.blance;
}

int main()
{

	Bankaccount b1;
	char at[100] = { " Bilal" };
	b1.setAccounttitle(at);
	char an[100] = { "3456 - 23461 - 456" };
	b1.setAccountnumber(an);
	float b = 20000;
	b1.setBlance(b);
	b1.withdraw();
	b1.display();
	
	char x[100] = { "1456 - 8956 - 253" };
	float y = 8000;
	Bankaccount b2(x, y);
	char z[100] = { "253 - 986 - 486" };
	b2.setAccountnumber(z);
	
	char a_t[100] = { " Muzamil" };
	b2.setAccounttitle(a_t);
	b2.deposit();
	b2.display();
	Bankaccount b3(b1);
	
	char a[100] = { " Fatima" };
	b3.setAccounttitle(a);
	char k[100] = { "2897 - 8056 - 253" };
	b3.setAccounttitle(k);
	cout << endl;
	b3.deposit();
	b3.display();
	b3.setBlance(0.2 * b3.getBlance());
	b3.withdraw();
	b3.display();
}
