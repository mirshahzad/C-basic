// Squareroot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main ()
{
	double number, ans;

	cout<<"Please enter the number:";
	cin>>number;

	ans=sqrt(number);

	cout << endl << "Square root of the \"" << number <<"\" is:"<<ans;

	cout<<"\nplease press any key to exit";
	getchar();
	getchar();
	return 0;
}
