#include "TChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char TChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	
	char c = tolower(inputChar);
	return c == 't' ?  c : defaultLetter;
}

TChecker::TChecker() 
{
	defaultLetter = '*';
}
