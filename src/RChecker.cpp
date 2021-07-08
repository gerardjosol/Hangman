#include "RChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char RChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'r' ?  c : defaultLetter;
}

RChecker::RChecker() 
{
	defaultLetter = '*';
}
