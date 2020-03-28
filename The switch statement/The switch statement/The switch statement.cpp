// The switch statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	int month;
	cout<<"\nEnter month number from 1,8, or 9:";
	cin>>month;
	switch (month)
	{
	case 1:
		cout<<"Star for 1st month is capricon\n";
		break;
	case 8:
		cout<<"star for 8th month is leo\n";
		break;
	case 9:
		cout<<"star for 9th month is virgo\n";
		break;
	}
	cout<<"Press any key to continue..";
	getchar();
	getchar();
	return 0;

}

