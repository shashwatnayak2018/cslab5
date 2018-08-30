//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring variables
	char a;
	//asking for an alphabet
	cout<<"Enter an alphabet:"<<endl;
	//read the alphabet
	cin>>a;
	//applying conditions
	if(64<int(a) && int(a)<91)
	{
		cout<<"The given alphabet is uppercase alphabet."<<endl;
	}
	else if(96<int(a) && int(a)<123)
	{
		cout<<"The given alphabet is lowercase alphabet"<<endl;
	}
	else
	{
		cout<<"The given character is not an alphabet"<<endl;
	}
	return 0;
}
