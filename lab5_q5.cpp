//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring variables
	int a;
	//asking to enter a number
	cout<< "Enter a number"<<endl;
	//read the number
	cin>>a;
	//applying condition
	if(a%2==0)
	{
		cout<<"The given number is even."<<endl;
	}
	else
	{
		cout<<"The given number id odd."<<endl;
	}
	return 0;
}
