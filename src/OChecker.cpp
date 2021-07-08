#include "OChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char OChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'o' ?  c : defaultLetter;
}

OChecker::OChecker() 
{
	defaultLetter = '*';
}
