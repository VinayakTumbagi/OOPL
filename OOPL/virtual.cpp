#include<iostream>

using namespace std;

class Shape
{
	public:
		virtual void input(){
		};
		virtual void compute(){
		};
		
};

class Triangle:public Shape
{
	float base,height;
	public:
		void input();
		void compute();	
	
};
void Triangle :: input()
{
	cout<<"Enter base and height:";
	cin>>base>>height;
}

void Triangle :: compute()
{
	cout<<"Area of triangle is : "<<0.5*base*height;
}

class Rectangle:public Shape
{
	float length,breadth;
	public:
		void input();
		void compute();	
	
};
void Rectangle :: input()
{
	cout<<"\n\nEnter length and breadth:";
	cin>>length>>breadth;
}

void Rectangle :: compute()
{
	cout<<"Area of rectangle is : "<<length*breadth;
}

int main()
{
	Shape *s;
	Triangle t;
	s=&t;
	s->input();
	s->compute();
	Rectangle r;
	s=&r;
	s->input();
	s->compute();
	
	return 0; 
}
