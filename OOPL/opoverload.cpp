#include<iostream>

using namespace std;

class A
{
	int real,imag;
	
	public:
	A()
	{
			real=5;
			imag=10;
	}
	A(int real,int imag)
	{
		this->real=real;
		this->imag=imag;
	}
		
		friend A operator +(A a,A b)
	{
		cout<<"\n\nAddition:";
		A c;
		
		c.real=a.real+b.real;
		c.imag=a.imag+b.imag;
		
		return c;
	}
	
	
		friend A operator -(A a,A b)
	{
		cout<<"\n\nSubtraction:";
		A c;
		
		c.real=a.real-b.real;
		c.imag=a.imag-b.imag;
		
		return c;
	}
		A operator *(A a)
		{
			cout<<"\n\nMultiplication:";
			A c;
			c.real=a.real*real;
			c.imag=a.imag*imag;
			
			return c;
		}
	
		A operator /(A a)
		{
			cout<<"\n\nDivision";
			A c;
			c.real=a.real/real;
			c.imag=a.imag/imag;
			
			return c;
		}
	
	void display()
	{
		cout<<"\nReal:"<<real<<"\nImaginary:"<<imag;
	}
	
};
int main()
{
	A h;
	h.display();
	A y(5,30);
	y.display();
	
	A k;
	k=h+y;
	k.display();
	k=h-y;
	k.display();
	k=h*y;
	k.display();
	k=h/y;
	k.display();
	
	
	
	
	return 0;
}
