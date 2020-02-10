// Addition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


using namespace std;

int main()

{
	int var1, var2, result;

	cout << "Please enter the first value:";
	cin >> var1;

	cout <<"Please enter the second value:";
	cin >> var2;

	result = var1 + var2;
	cout << endl << "Result is:"<<result;

	cout << endl << "Press any key to exit";
	getchar();
	getchar();

	return 0;



}
