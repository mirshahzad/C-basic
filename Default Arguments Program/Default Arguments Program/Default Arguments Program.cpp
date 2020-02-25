// Default Arguments Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
void repchar (char='*', int=45);		//declaration with default arguments
int main()
{
	repchar();							//prints 45 asterisks
	repchar('=');						//prints 45 equal signs
	repchar('+', 30);					//prints 30 plus signs

	cout<<"Press any key to exit";
	getchar();
	getchar();
	return 0;
}

	void repchar (char ch, int n)		//defaults supplied if necessary
	{
		for (int j=0; j<n; j++)			//loops n times
		cout<<"*";						//prints ch
		cout<<endl;
	}