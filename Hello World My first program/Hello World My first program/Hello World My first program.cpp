// Hello World My first program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main()
{
	int var1, var2, result;
	cout<<"Please enter the first variable:";
	cin>>var1;
	
	cout<<endl<<"Please enter the second value";
	cin>>var2;
	
	result=var1+var2;
	cout<<endl<<"Result is"<<result;
	
	cout<<"Press any key to continue....";
	getchar();
	return 0;
}


