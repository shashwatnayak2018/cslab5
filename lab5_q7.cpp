//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring variables
	char a;
	//ask for a character
	cout<<"Enter a character"<<endl;
	//read the character
	cin>>a;
	//applying condition
	if(64<int(a) && int(a)<91)
	{
		cout<<"The character is an alphabet."<<endl;
	}
	else if(96<int(a) && int(a)<123)
	{
		cout<<"The character is an alphabet."<<endl;
	}
	else
	{
		cout<<"The character is not an alphabet."<<endl;
	}
	return 0;
}	
