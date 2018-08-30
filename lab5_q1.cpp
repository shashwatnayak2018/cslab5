//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring two variables
	int a,b;
	// ask for two numbers
	cout<< "Enter two numbers:"<<endl;
	//read the two numbers
	cin>> a >> b;
	//applying conditions
	if(a>b)
	{
		cout<< "The larger number is "<<a<< endl;
	}
	else
	{
		cout<< " The larger number is "<<b<<endl;
	}
	return 0;
}
