//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring variables
	int a;
	//ask for a number
	cout<< " Enter a number "<<endl;
	//read the number
	cin>>a;
	//using a condition
	if(a==0)
	{
		cout<< "The given number is equal to zero."<<endl;
	}
	else if(a>0)
	{
		cout<< " The given number is positive. "<<endl;
	}
	else
	{
		cout<< "The given number is negative. "<<endl;
	}
	return 0;
}
