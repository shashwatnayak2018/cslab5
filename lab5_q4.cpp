//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declare variables
	int a;
	//ask for a number
	cout<< "Enter a number "<<endl;
	//read the number
	cin>>a;
	//applying a condition
	if(a%5==0 && a%11==0)
	{
		cout<< " The entered number is divisible by both 5 and 11."<<endl;
	}
	else if(a%11==0)
	{
		cout<< "The entered number is divisible by 11."<<endl;
	}
	else if(a%5==0)
	{
		cout<< "The entered number is divisible by 5."<<endl;
	}
	else
	{
		cout<< "The enterd number is neither divisible by 5 nor divisible by 11."<<endl;
	}
	return 0;
}
