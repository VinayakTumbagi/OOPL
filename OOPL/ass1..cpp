/*------Name:Vinayak Tumbagi ------
  ------Roll no:SI67 ------*/



#include<iostream>

static int count=0;
using namespace std;

class WReport
{
	
		
		
		public:
			int hightemp,lowtemp,ramount,samount;
			
			void accept()
			{
				cout<<"Enter hightemp and lowtemp:";
				cin>>hightemp>>lowtemp;
				cout<<"\nEnter rain amount and snowfall amount(in mm):";
				cin>>ramount>>samount;
				
			}
			void display()
			{
				cout<<"High temp:"<<hightemp<<"\nLow temp:"<<lowtemp<<"\nRain amount:"<<ramount<<"\nSnow amount:"<<samount<<endl<<endl;
			}
			
		/*	void avg()
			{
				cout<<"High temp(avg):"<<havg<<" Low temp(avg)"<<lavg<<" Rain(avg):"<<ravg<<"Snow(avg):"<<savg<<endl<<endl;
			}*/
	
};

int main()
{
	int choice;
	int k=1;
	float havg=0,lavg=0,ravg=0,savg=0;
	WReport w[30];
	
	while(k==1)
	{
	cout<<"\n1.Accept\n2.Display\n3.Average\n";
	cout<<"Enter ur choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			w[count].accept();
			
				havg +=w[count].hightemp;
				lavg +=w[count].lowtemp;
				ravg +=w[count].ramount;
				savg +=w[count].samount;
				
				count++;
			break;
		case 2:
			for(int i=0;i<count;i++)
			{
				w[i].display();
			}
			break;
		case 3:
			cout<<"High temp(avg):"<<havg/count<<" Low temp(avg)"<<lavg/count<<" Rain(avg):"<<ravg/count<<"Snow(avg):"<<savg/count<<endl<<endl;
			break;
		default:
			cout<<"Wrong choice entered!!!!!!";
	}
	cout<<"Menu?:(1/0)";
	cin>>k;
	}
	
	return 0;
}
