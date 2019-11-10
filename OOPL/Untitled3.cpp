#include<iostream>

using namespace std;

class A
{
	int real,imag;
	
	public:
		A()
		{
			real=2;
			imag=3;
		}
		
		A operator +(A a)
		{
			A c;
			c.real=a.real+real;
			c.imag=a.imag+imag;
			return c;
		}
		friend A operator *(A z,A y)
		{
			A x;
			x.real=z.real*y.real;
			x.imag=z.imag*y.imag;
			
			return x;
		}
		void display()
		{
			cout<<"\nReal="<<real<<"   Imag="<<imag;
		}
	
};

int main()
{
	A a;
	A b;
	A c;
	c=a+b;
	c.display();
	c=a*b;
	c.display();
	
	return 0;
	
}
