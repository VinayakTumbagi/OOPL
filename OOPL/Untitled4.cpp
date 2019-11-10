#include<iostream>
using namespace std;

template<class T>
class A
{
	T o;
	public:
	A()
	{
		o=5;
		cout<<o;	
	}	
};

int main()
{
	A <int>a;
	A <float> b;
	
	return 0;
}
