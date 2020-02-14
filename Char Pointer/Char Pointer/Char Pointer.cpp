// Char Pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	char* pstr1("Quaid-e-Azam");
	char* pstr2("Allama Iqbal");
	char* pstr3("Sir Syed Ahmmed Khan");
	char* pstr4("M M ALAM");
	char* pstr5("Imran Khan");
	char* pstr6("Ashfaq Ahmad");
	char* pstr("Your lucky star is ");

	int dice(0);
	cout<<"Pick a lucky star!" <<"Enter a number between 1 and 6: ";
	cin>>dice;		
	cout<<endl;

	switch (dice)
	{
		case 1: cout<<pstr<<pstr1;	break;
		case 2: cout<<pstr<<pstr2;	break;
		case 3: cout<<pstr<<pstr3;	break;
		case 4: cout<<pstr<<pstr4;	break;
		case 5: cout<<pstr<<pstr5;	break;
		case 6:	cout<<pstr<<pstr6;	break;
		default : cout<<"Sorry, you haven't got a lucky star.";
	}

	cout<<"\n\nPress any key to exit..";
	getchar();
	getchar();
	return 0;

}