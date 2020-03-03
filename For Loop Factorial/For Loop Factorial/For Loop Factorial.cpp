// For Loop Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	int j;
	unsigned int number;
	unsigned long fact=1;

	cout<<"Please enter the number:";
	cin>>number;

	for(int j=number; j>0; j--)
	fact *=j;
	cout<<"factorial is " << fact<<endl;

	cout<<"Press any key to exit...";
	getchar();
	getchar();
	return 0;
}
