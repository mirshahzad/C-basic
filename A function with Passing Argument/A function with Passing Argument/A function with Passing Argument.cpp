// A function with Passing Argument.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
void repchar (char, int);		//function declaration

int main()
{
	repchar('-', 43);			// call to function
	cout<<"Students Result" <<endl;

	repchar('=', 23);			//call to function
	cout<<"Student A got 85 marks" <<endl;
	cout<<"Student B got 73 marks" <<endl;
	cout<<"Student C got 68 marks" <<endl;
	repchar('-', 43);			//call to function

	cout<<"Press any key to exit" <<endl;
	getchar();
	getchar();
	return 0;
}

void repchar (char ch, int n)		//function declarator
{
	for (int j=0; j<n; j++)			//function body
	cout<<"*";
	cout<<endl;
}