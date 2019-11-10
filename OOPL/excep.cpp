#include<iostream>

using namespace std;

int main()
{
	double a,b;
	
	cout<<"Enter a and b:";
	cin>>a>>b;
	
	try
	{
		if(b==0)
		{
			throw b ;
		}
		else
		{
			double c=a/b;
			cout<<"Division:"<<c;
		}
		
	}
	
	catch(...)
	{
		cout<<"Caught exception";
	}
	
	return 0;
}

