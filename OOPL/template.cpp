
#include<iostream>

using namespace std;

template<class T1>
void input(T1 a[3][3],int row,int col)
{
	cout<<"Enter data:";
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>a[i][j];
		
		}
	}


}

template<class T2>
void display(T2 a[3][3],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		
		}
		cout<<endl;
	}
	cout<<endl;

}

template<class T1,class T2,class T3>
void add(T1 a[3][3],T2 b[3][3],T3 c[3][3],int row,int col)
{
	cout<<"Addition="<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		
		}
	}


}

template<class T1,class T2,class T3>
void sub(T1 a[3][3],T2 b[3][3],T3 d[3][3],int row,int col)
{
	cout<<"Subtraction="<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
		
		}
	}


}


template<class T1,class T2,class T3>
void mul(T1 a[3][3],T2 b[3][3],T3 d[3][3],int row,int col)
{
	cout<<"Multiplication="<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			for(int k=0;k<col;k++)
			{
				d[i][j]=d[i][j]+(a[i][k]*b[k][j]);
			}
			
		
		}
	}


}
int main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3];
	
	input(a,3,3);
	input(b,3,3);
	display(a,3,3);
	display(b,3,3);
	
	add(a,b,c,3,3);
	display(c,3,3);
	
	sub(a,b,d,3,3);
	display(d,3,3);
	
	mul(a,b,e,3,3);
	display(e,3,3);
	
	
	return 0;


}
