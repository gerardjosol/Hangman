#include "GChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char GChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'g' ?  c : defaultLetter;
}

GChecker::GChecker()
{
	defaultLetter = '*';
}
