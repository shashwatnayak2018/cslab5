//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring variables
	int year;
	//asking for the year
	cout<<"Enter the year:"<<endl;
	//read the year
	cin>>year;
	//applying condition
	if(year%4==0)
	{
		cout<<"This year is a leap year."<<endl;
	}
	else
	{
		cout<<"This year is not a leap year."<<endl;
	}
	return 0;
}
