// Reference Arguments Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	void intfrac (float, float&, float&);		//declaration
	float number, intpart, fracpart;			//float variables
do	{
	cout<<"\nEnter a real number:";				//number from user
	cin>>number;
	intfrac(number, intpart, fracpart);			//find int and frac
	cout<<"Integer part is " <<intpart			//print them
	<<", fraction part in" <<fracpart <<endl;
}	while (number != 0.0);						//exit loop on 0.0
	
	cout<<"Press any key to exit....";
	getchar();
	getchar();
	return 0;
}
	void intfrac (float n, float& intp, float& fracp)
	{
		long temp= static_cast <long> (n);		//convert to long
		intp=static_cast <float> (temp);		//back to float
		fracp= n-intp;							//subtract integer part
	}