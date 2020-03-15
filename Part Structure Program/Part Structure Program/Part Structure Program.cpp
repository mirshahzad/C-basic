// Part Structure Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

struct part // declare a structure
{
	int modelnumber;
	int partnumber;
	float cost;
};
int main()
{
	part part1; //define a structure variable
	part1.modelnumber=6244;
	part1.partnumber=373;
	part1.cost=217.55F;
	//display structure members
	cout<<" Model " <<part1.modelnumber;
	cout<<", part " <<part1.partnumber;
	cout<<", costs $" <<part1.cost <<endl;

	cout<<"Press any key to exit";
	getchar();
	getchar();
	return 0;
}