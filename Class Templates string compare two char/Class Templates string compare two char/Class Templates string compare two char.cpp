// Class Templates string compare two char.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>‪

using namespace std;

template <class T>

class Comp
{
public:

	void Comparison(T char1 , T char2);
	//end of constructor
};  //end of class template

template <class T>

void Comp<T>::Comparison(T char1, T char2) 
{
	if (char1 == char2) 
		{
		cout <<endl<< "Strings are equal"<<endl;
		} 
	else 
		{
		cout <<endl<< "Strings are not equal"<<endl;
		}
}

int main() 
{
	//declaring variables to take input

	string char1 = "hello";
	string char2 = "students";
	//call the template class with string

	Comp<string> compare;
	//call the comparison method to check if strings are equal
	
	compare.Comparison(char1, char2);
	//now changing the values and comparing again

	char1 = "hello";
	char2 = "students";
	compare.Comparison(char1, char2);

	cout<<"Press any key to exit..."<<endl;
	getchar();
	return 0;
}		//end of main
