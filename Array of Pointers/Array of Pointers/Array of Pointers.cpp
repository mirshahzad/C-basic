// Array of Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()

{
	char* pstr[]={"Quaid-e-Azam",			//initializing a pointer array
				  "Allama Iqbal",
				  "Sir Syed Ahmed Khan",
				  "M M ALAM",
				  "Imran Khan",
				  "Ashfaq Ahmad",
	};

	char* pstart("Your lucky star is ");
	int dice(0);
	cout<<"Pick a lucky star" <<endl <<"Enter a number between 1 and 6:	";
	cin>>dice;		cout<<endl;

	if (dice>=1&& dice<=6)			//check input validity
		cout<<pstart<<pstr[dice-1];	//output star name
	else
		cout<<"Sorry, you haven't got a lucky star.";	//invalid input
	cout<<endl;

	cout<<"\n\nPress any key to exit..";
	getchar();
	getchar();
	return 0;
}