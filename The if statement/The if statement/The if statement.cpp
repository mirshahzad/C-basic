// The if statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()

{
	int x;
	cout<<"Enter a number:";
	cin>>x;
	if (x>100)
		cout<<"That number is greater than 100\n";
	cout<<"Press any key to continue..";
	getchar();
	getchar();
	return 0;

}
