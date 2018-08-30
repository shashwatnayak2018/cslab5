//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring variables
	int a,b,c;
	//ask to enter three numbers
	cout<< "Enter three numbers which are not equal: "<<endl;
	//read three numbers
	cin>>a>>b>>c;
	//applying a condition
	if(a>b && a>c)
	{
		cout<< " The largest number is "<<a<<endl;
	}
	else if(b>c && b>a)
	{
		cout<< " The largest number is "<<b<<endl;
	}
	else
	{
		cout<< "The largest number is"<<c<<endl;
	}
	return 0;
}
