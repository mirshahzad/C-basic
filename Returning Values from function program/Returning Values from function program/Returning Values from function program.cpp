// Returning Values from function program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
float lbstokg(float);	//declaration

int main()
{
	float lbs, kgs;
	cout<<"\nEnter your weight in pounds:";
	cin>>lbs;
	kgs=lbstokg(lbs);
	cout<<"Your weight in Kilogram is:" <<kgs<<endl;
	
	cout<<"Press any key to exit....";
	getchar();
	getchar();
	return 0;
}
	//lbstokg()
	//converts pounds to kilograms
	float lbstokg(float pounds)
	{
		float kilograms= 0.453592*pounds;
		return kilograms;
	}