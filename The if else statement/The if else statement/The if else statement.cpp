// The if else statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	int x;
	cout<<"\nEnter a number:";
	cin>>x;
	if(x>100)
	cout<<"that number is greater than 100\n";
	else
	cout<<"that number is less than 100\n";
	cout<<"Press any key to continue..";
	getchar();
	getchar();
	return 0;

}
