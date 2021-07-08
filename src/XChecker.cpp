#include "XChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char XChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'x' ?  c : defaultLetter;
}

XChecker::XChecker() 
{
	defaultLetter = '*';
}
