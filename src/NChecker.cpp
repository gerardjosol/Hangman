#include "NChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char NChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'n' ?  c : defaultLetter;
}

NChecker::NChecker() 
{
	defaultLetter = '*';
}
