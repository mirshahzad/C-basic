// Buffer Overflo in Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	const int MAX=20;
	char str[MAX];
	cout<<"\nEnter a String:";
	cin>>setw(MAX)>>str;
	cout<<"You entered:"<<str<<endl;

	cout<<"Press any key to exit..";
	getchar();
	getchar();
	return 0;
}