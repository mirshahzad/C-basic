// Array of Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	const int DAYS=7;
	const int MAX=10;
	char star[DAYS][MAX] ={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	for (int j=0; j<DAYS; j++)
		cout<<star[j]<<endl;
	
	cout<<"Press any key to exit..";
	getchar();
	getchar();
	return 0;
}