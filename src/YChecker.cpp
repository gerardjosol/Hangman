#include "YChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char YChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'y' ?  c : defaultLetter;
}

YChecker::YChecker() 
{
	defaultLetter = '*';
}
