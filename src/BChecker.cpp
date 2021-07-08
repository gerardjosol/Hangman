#include "BChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char BChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'b' ?  c : defaultLetter;
}

BChecker::BChecker()
{
	defaultLetter = '*';
}
