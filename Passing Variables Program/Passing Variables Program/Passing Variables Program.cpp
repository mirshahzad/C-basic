// Passing Variables Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
void repchar (char, int);		//function declaration

int main()
{
	char char_in;
	int number_in;
	cout<<"Enter a character:";
	cin>>char_in;
	cout<<"Enter number of times to repeat it:";
	cin>>number_in;

	repchar (char_in, number_in);

	cout<<"Press any key to exit" <<endl;
	getchar();
	getchar();
	return 0;
}

	void repchar (char ch, int n)		//function declarator
	{
		for (int j=0; j<n; j++)			//function body
			cout<<ch;;
		cout<<endl;
	}
