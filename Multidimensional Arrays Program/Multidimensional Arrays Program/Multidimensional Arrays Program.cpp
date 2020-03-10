// Multidimensional Arrays Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
using namespace std;

const int DISTRICTS=4;
const int MONTHS=3;

int main()
{
	int d, m;
	double sales[DISTRICTS][MONTHS]			//TWO-DIMENSIONAL ARRAY
	;for (d=0; d<DISTRICTS; d++)				//get array values
	for (m=0; m<MONTHS; m++)
	{
		cout<< "Enter sales for district" <<d+1;
		cout<<", month" <<m+1<<":";
		cin>>sales[d][m];			//put number in array
	}
	cout<<"\n\n";		cout<<"Month\n";		cout<<"1 2 3";
	for (d=0; d<DISTRICTS; d++)
	{
		cout<<"\nDistrict"<<d+1;
		for (m=0; m<MONTHS; m++)			//display array values
		cout<<setiosflags(ios::fixed)
		<<setiosflags(ios::showpoint)		//always use point
		<<setprecision(2)					//digits to right
		<<setw (10)							//field width
		<<sales[d][m];						//get number from array
	}
	cout<<endl;

	cout<<"Press any key to exit...";
	getchar();
	getchar();
	return 0;
}