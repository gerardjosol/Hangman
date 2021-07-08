#include "FChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char FChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'f' ?  c : defaultLetter;
}

FChecker::FChecker()
{
	defaultLetter = '*';
}
