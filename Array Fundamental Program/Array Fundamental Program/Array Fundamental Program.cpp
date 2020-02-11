// Array Fundamental Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	int age[4];
	for (int j=0; j<4; j++)
	{
		cout<<"enter an age:";
		cin>>age[j];
	}
	for (int j=0; j<4; j++)
		cout<<"You entered " <<age[j] <<endl;
			
	cout<<"Press any key to exit...";
	getchar();
	getchar();
	return 0;
}

