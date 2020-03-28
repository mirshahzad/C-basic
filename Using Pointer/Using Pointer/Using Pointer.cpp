// Using Pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	int var1=11;			//to integer variables
	int var2=22;
	cout<<&var1<<endl		//print addresses of variables
	<<&var2<<endl<<endl;
	int* ptr;				//Pointer to integers
	ptr=&var1;				//Pointer points to var1
	cout<<ptr<<endl;		//print pointer value
	ptr=&var2;				//pointer points to var2
	cout<<ptr<<endl;		//print pointer value

	cout<<"Press any key to exit";
	getchar();
	getchar();
	return 0;
}