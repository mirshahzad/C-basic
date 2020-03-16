// Passing Arrays to functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iomanip>
using namespace std;
const int DISTRICT=4;
const int MONTHS=3;
void display (double[DISTRICT][MONTHS]);
int main()
{
	double sales[DISTRICT][MONTHS]
	;{{1432.07, 234.50, 654.01;}
	{322.0, 13838.32, 17589.88;}
	{9328.34, 934.00, 4492.30;}
	{12838.29, 2332.63, 32.93;}};
	display(sales);

	cout<<"Press any key to exit";
	getchar();
	getchar();
	return 0;
}
void display (double funsales[DISTRICT][MONTHS])
{ 
	int d, m;
	cout<<"\n\n";
	cout<<"Month\n";
	cout<<"1 2 3";
	for (d=0; d<DISTRICT; d++)
	{
		cout<<"\nDistrict"<<d+1;
		for (m=0; m<MONTHS; m++)
			cout<<setiosflags(ios::fixed)<<setw(10)<<setiosflags(ios::showpoint)<<setprecision(2)
			<<funsales[d][m];
	}
}
	

