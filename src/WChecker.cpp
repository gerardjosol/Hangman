#include "WChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char WChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'w' ?  c : defaultLetter;
}

WChecker::WChecker() 
{
	defaultLetter = '*';
}
