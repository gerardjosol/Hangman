#include "JChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char JChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'j' ?  c : defaultLetter;
}

JChecker::JChecker() 
{
	defaultLetter = '*';
}
