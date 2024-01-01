#include<iostream>
using namespace std;
class Time
{
public:
	int parameter;
	void para(int parameter)
	{
		parameter = 0;
	}
private:
	int hour;
	int second;
	int minute;
public:
	Time()
	{}
	Time(int hour, int minute, int second)
	{
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
};
int main()
{
	int parameter = 0;
	Time t1;
	t1.para(parameter);
	return 0;
}