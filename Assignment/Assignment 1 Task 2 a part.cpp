#include <iostream>
using namespace std;
class Time
{
public:
	int parameter;
	Time()
	{}
	Time(int parameter)
	{
		parameter = 0;
	}
	~Time()
	{}
};
int main()
{
	Time obj;;
	return 0;
}