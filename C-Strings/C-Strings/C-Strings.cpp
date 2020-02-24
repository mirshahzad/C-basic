// C-Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	const int MAX=80;
	char str[MAX];
	cout<<"Enter a string:";
	cin>>str;
	cout<<"You entered:"<<str<<endl;

	cout<<"Press any key to exit...";
	getchar();
	getchar();
	return 0;
}
