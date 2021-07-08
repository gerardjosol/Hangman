#include "LChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char LChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'l' ?  c : defaultLetter;
}

LChecker::LChecker() 
{
	defaultLetter = '*';
}
