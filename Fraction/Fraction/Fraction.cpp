// Fraction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "String.h"
#include <sstream>
#include <stdlib.h>

using namespace std;


int main (){
	string num1 , num2, den1,den2;
	
	int n1,n2,d1,d2 , result;
	
	cout << "Enter Fraction 1: " ;
	
	getline(cin,num1,'/'); //get numerator
	getline(cin,den1); // get denominator 
	
	cout << "Enter Fraction 2: " ;
	
	getline (cin,num2,'/');
	getline(cin,den2);
	
	cout << "Fraction 1: " << num1 << '/' <<den1 <<endl;
	cout << "Fraction 1: " << num2 << '/' <<den2 <<endl;
	
	n1 = atoi(num1.c_str());
	n2 = atoi(num2.c_str());
	d1 = atoi(den1.c_str());
	d2 = atoi(den2.c_str());
	
	int numerator = (d1==d2)?n1+n2:n1*d2+n2*d1;
	int denominator = (d1==d2)? d1:d1*d2;
	
	cout << "Fraction after addition is: " << numerator << "/" << denominator <<endl;
	
	
	
	//now extracting numerator and denominator
	
		
	cout<<"Press any key to continue.." <<endl;
	getchar();
	getchar();
	
	return 0;
	
	
	
}

