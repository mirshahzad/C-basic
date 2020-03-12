// Namespace program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
namespace myStuff
{
	int value=0;
}
int main()
{
	std::cout<<"Enter an integer:";
	std::cin>> myStuff::value;
	std::cout<<"\nYou entered " <<myStuff::value <<std::endl;

	std::cout<<"Press any key to exit..";
	getchar();
	getchar();
	return 0;
}