//library
#include<iostream>
using namespace std;
//function
int main()
{
	//declaring variables
	char a;
	//asking for an alphabet
	cout<<"Enter an alphabet"<<endl;
	//read the alphabet
	cin>>a;
	//applying conditions
	if(a==65 || a==69 ||a==73 || a==79 || a==85 || a==97 || a==101 || a==105 || a==111 || a==117)
	{
		cout<< " The given alphabet is a vowel."<<endl;
	}
	else
	{
		cout<<"The given alphabet is a consonant"<<endl;
	}
	return 0;
}
