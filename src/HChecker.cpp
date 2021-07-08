#include "HChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char HChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'h' ?  c : defaultLetter;
}

HChecker::HChecker()
{
	defaultLetter = '*';
}
