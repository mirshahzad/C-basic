// A simple function program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

void starline(); // function declaration

int main()		// main function
{
	cout<<endl;
	starline();		//first call to the function
	cout<<"Students List" <<endl;
	starline();		//second call to the function
	cout<<"1. First Student Name and Registration Number" <<endl;
	cout<<"2. Second Student Name and Registration Number" <<endl;
	cout<<"3. Third Student Name and Registration Number" <<endl;
	starline();		//third call to the function

	cout<<"Press any key to exit" <<endl;
	getchar();
	getchar();
	return 0;

}

void starline()		//function declaration
{
	for (int j=0; j<45; j++)
		cout<<"*";
		cout<<endl;
}