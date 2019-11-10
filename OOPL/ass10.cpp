#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char buff[100],k[100];
	ofstream out;
	out.open("a.txt");
	cout<<"Enter text to be entered in txt:";
	cin.getline(buff,100);
	out<<buff<<endl;
	out.close();
	
	ifstream in;
	in.open("a.txt");
	while(!in.eof())
	{
		in>>k;
		cout<<k;
	}
	in.close();
	
	
		return 0;
}
