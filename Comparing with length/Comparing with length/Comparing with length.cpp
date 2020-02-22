// Comparing with length.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template <class T>

class Comp

{

public:
	void Comparison(T char1 , T char2);
	
											//end of constructor
};											//end of class template

template <class T>

void Comp<T>::Comparison(T char1, T char2) 
{
	
		if (char1>char2) 
		{
			cout <<endl<< "Length of character-1 is: " << char1.length() << endl;
			cout <<endl<< "Length of character-2 is: " << char2.length() << endl;
			cout <<endl<< "Character 1 is greater than character 2."<<endl;
		} 
		else 
		{
			cout <<endl<< "Length of character-1 is: " << char1.length() << endl;
			cout <<endl<< "Length of character-2 is: " << char2.length() << endl;
			cout <<endl<< "Character 1 is less than character 2."<<endl;
		}

}

int main() {

								//declaring variables to take input
	string char1 = "Hello";
	string char2 = "Students";
	
								//call the template class with string
	Comp<string> compare;
								//call the comparison method to check if strings are equal
	compare.Comparison(char1, char2);
	
	cout<<endl<<"Press any key to continue..."<<endl;
	getchar();
	getchar();
	return 0;
}								//end of main