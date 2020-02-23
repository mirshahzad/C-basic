// Copying a String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstring>
using namespace std;
int main()
{
	char str1[]= "Tiger, tiger, burning bright\n\n the forests of the night";
	const int MAX=80;
	char str2[MAX];
	strcpy (str2, str1);
	cout<<str2<<endl;

	cout<<"Press any key to exit...";
	getchar();
	getchar();
	return 0;
}
