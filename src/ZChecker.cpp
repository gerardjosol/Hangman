#include "ZChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char ZChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'z' ?  c : defaultLetter;
}

ZChecker::ZChecker() 
{
	defaultLetter = '*';
}
