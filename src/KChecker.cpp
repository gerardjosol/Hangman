#include "KChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char KChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 'k' ?  c : defaultLetter;
}

KChecker::KChecker() 
{
	defaultLetter = '*';
}
