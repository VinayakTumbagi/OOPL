/******Name:Vinayak Tumbagi******
******Roll no:SI67******/


#include<iostream>
#include<string.h>
static int count=0,flag=0;
using namespace std;

class Book
{
	public:
		char author[40],title[40],publisher[40];
		Book()
		{
			strcpy(author,"");
			strcpy(title,"");
			strcpy(publisher,"");
		}
		
		void add()
		{
			cout<<"\nEnter author:";
			cin>>author;
			cout<<"\nEnter title:";
			cin>>title;
			cout<<"\nEnter publisher:";
			cin>>publisher;
			
			count++;
			
			
		}
		
		/*void update(char title[50])
		{
			
		}*/
		
		void display()
		{
			if(count==0)
				cout<<"Empty record...";
			else
				cout<<"\nAuthor:"<<author<<"\nTitle:"<<title<<"\nPublisher:"<<publisher;
		}
		
		void search(char titl[50])
		{
			if(count==0)
			{
			
				cout<<"Empty record...";
				flag=1;
			}
			
			else if(strcmp(title,titl)==0)
			{
				flag=1;
				cout<<"Book found..."<<"  Author:"<<author<<" Publisher:"<<publisher;
			}
			
		}
		
	
};

int main()
{
	Book b[30];
	int k=1,ch;
	while(k==1)
	{
		cout<<"\n1.Add a book\n2.Display books\n3.Search a book\n";
		cout<<"Enter ur choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				b[count].add();
				break;
			case 2:
				for(int i=0;i<count;i++)
				{
					b[i].display();
				}
				break;
			case 3:
				char title1[50];
				cout<<"Enter the title of the book to be searched: ";
				cin>>title1;
				
				for(int i=0;i<count;i++)
				{
					if(flag==1)
						break;
					else
						b[i].search(title1);
				}
				break;
				
				default:
					cout<<"Wrong choice entered!!!!!";
					
		}
		cout<<"\n\nDo u want to continue?:(1/0)";
		cin>>k;
		
	}
}
