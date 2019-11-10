#include<iostream>
static int count=0;

using namespace std;

class Personal
{
	protected:
	char name[30],city[30],dob[30];
		
};

class Professional
{
	protected:
	long int emp_no;
	char offcity[30];
	
};

class Derived:public Personal,public Professional
{
	public:
			void display()
			{
				cout<<"\nName="<<name<<"\nCity="<<city<<"\nDOB="<<dob<<"\nEmp_no:"<<emp_no<<"\nOffCity:"<<offcity;
			}
			void accept()
			{
				cout<<"Enter name:";
			cin>>name;
			cout<<"Enter DOB:";
			cin>>dob;
			cout<<"Enter city:";
			cin>>city;
				
				
		cout<<"Office city:";
		cin>>offcity;		
				
		cout<<"Enter emp_no:";
		cin>>emp_no;
		
		
			}
	
};

int main()
{
	int k=1;
	Derived d[20];
	
	while(k==1)
	{
	d[count].accept();
	d[count].display();
	count++;

	cout<<"\n\nWant to continue?(1/0):";
	cin>>k;
    }
}
