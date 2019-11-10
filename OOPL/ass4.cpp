#include<iostream>
#include<string.h>
static int count=0;
using namespace std;

class Personal
{
	protected:
	char name[30];
	char bg[3];
	char dob[11];
	
};
class Physique
{
	protected:
			int weight;
			int height;
};
class Derived:public Personal,public Physique
{
	
	
	public:
		char number[11];
		
		void accept()
		{
			cout<<"\nEnter name:";
			cin>>name;
			cout<<"Enter Bloodgroup:";
			cin>>bg;
			cout<<"Enter dob(11/02/2000):";
			cin>>dob;
			cout<<"Enter height(in cms) and weight:";
			cin>>height>>weight;
			cout<<"Enter mobile number:";
			cin>>number;
		}
		
		void display()
		{
			cout<<"\nName:"<<name<<"\nBloodgroup:"<<bg<<"\nDob:"<<dob<<"\nHeight:"<<height<<"\nWeight:"<<weight<<"\nNumber:"<<number;
		}
		
		
};

int main()
{
	Derived d[10];
	int ch,k=1;

while(k==1)
{

	cout<<"\n1.Accept\n2.Delete\n3.Display\n4.Search";
	cout<<"\nEnter choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			d[count].accept();
			count++;
			break;
			
		case 2:
			char num[11];
			cout<<"Enter mob no:";
			cin>>num;
			
			for(int i=0;i<count;i++)
			{
				if(strcmp(d[i].number,num)==0)
				{
					for(int k=i;k<count-1;k++)
					{
						d[k]=d[k+1];
					}
					count--;
					break;
				}
			}
			break;
			
		case 3:
				for(int i=0;i<count;i++)
				{
					d[i].display();
				}
				break;
		case 4:
				char n[11];
				cout<<"Enter mob no to be searched:";
				cin>>n;
				for(int i=0;i<count;i++)
				{
					if(strcmp(d[i].number,n)==0)
					{
						cout<<"Found:\n";
						d[i].display();
					}
					
				}
				
				break;
				
			default:
				cout<<"Wrong choice entered!!!!!";
			
			
	}
	
	cout<<"\nDo u want to continue?(1/0):";
	cin>>k;
}
	return 0;
	
}
