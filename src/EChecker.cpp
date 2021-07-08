#include "EChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char EChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'e' ?  c : defaultLetter;
}

EChecker::EChecker()
{
	defaultLetter = '*';
}
