// operator-overloading >.cpp
#include "stdafx.h"				//Header
#include "iostream"				//Header

using std::cout;				//Namespace
using std::endl;

class cBox				//	Class definition at global at global scope
{
public:		
	//constructor definition
	explicit cBox(double lv=1.0, double wv=1.0, double hv=1.0):	//constructor definition
	m_Length(lv), m_Width(wv), m_Height(hv)
	{
		cout<<endl<<"Constructor Called" <<endl;
	}
	//Function to calculate the volume of a box

	double Volume() const			//Volume Calculate
	{
		cout<<endl <<m_Length*m_Width*m_Height<<endl;
		return m_Length*m_Width*m_Height;
	}

	bool operator > (const cBox & aBox) const;	//overloaded 'greater than'		//Comparison function overloading operator
	//Destructor definition
	
	cBox()		//Default Destructor
	{
		cout<<"Destructor called" <<endl;
	}
	private:					//Private data member of cBox class
		double m_Length;		//Length of a box in inches
		double m_Width;			//Width of a box in inches
		double m_Height;		//Height of a box in inches
	};
	// Operator function for 'greater than' that compares volume of cBox objects.

	bool cBox:: operator > (const cBox & aBox) const		//Define overloading operator
	{
		return this ->Volume() > aBox.Volume();			//Comparison
	}
	
	int main()

	{									//Create three objects
		cBox smallBox (4.0, 2.0, 1.0);
		cBox mediumBox (10.0, 4.0, 1.0);
		cBox bigBox (30.0, 20.0, 40.0);

		if (mediumBox > smallBox)			//Compare
			cout<<endl <<"medium is bigger than smallBox" <<endl;
		if (mediumBox > bigBox)			//Compare
			cout<<endl <<"mediumBox is bigger than bigBox" <<endl;
		else								//Compare
			cout<<endl <<"mediumBox is not bigger than bigBox" <<endl;

		cout<<endl;
		getchar();
		return 0;

	}