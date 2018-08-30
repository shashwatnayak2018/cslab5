//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring variables
	char a;
	//asking for a character
	cout<<"Enter a character:"<<endl;
	//read the character
	cin>>a;
	//applying condition
	if(47<int(a) && int(a)<58)
	{
		cout<<"The given character is a digit."<<endl;
	}
	else if(64<int(a) && int(a)<91)
	{
		cout<<"The given character is an alphabet."<<endl;
	}
	else if(96<int(a) && int(a)<123)
	{
		cout<<"The given character is an alphabet."<<endl;
	}
	else
	{
		cout<<"THe given character is a special character."<<endl;
	}
	return 0;
}
