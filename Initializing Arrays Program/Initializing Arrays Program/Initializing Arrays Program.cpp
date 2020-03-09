// Initializing Arrays Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	int month, day, total_days;
	int days_per_month[12] = {31,28,30,31,30,31,31,30,31,30,31};
	cout<<"\nEnter month (1 to 12):";		// get date
	cin>>month;
	if (month==2)
		cout<<"Enter day (1 to 28):";
	else
		cout<<"Enter day (1 to 31):";
	cin>> day;
	total_days = day;		// seperate days
	for (int j=0; j<month-1; j++)		//add days each month
		total_days+=days_per_month[j];
	cout<<"Total days from STart of year is:" <<total_days<<endl;

		
	cout<<"Press any key to exit...";
	getchar();
	getchar();
	return 0;
}