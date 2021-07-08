#include "AChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char AChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'a' ?  c : defaultLetter;
}

AChecker::AChecker() 
{
	defaultLetter = '*';
}
