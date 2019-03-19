#include <iostream>
using namespace std;

class test
{
	static ston *single;
	ston()
	{
		cout<<"Inside const"<<endl;
	}
public:
	static singleton getInstance()
	{
		if(single == NULL)
		single = new ston;

		return single;
	}	
};

ston*ston::single = NULL;

int main()
{
	ston *s1, *s2;
	s1 = ston::getInstance();
	s2 = ston::getInstance();

	return 0;	
}
