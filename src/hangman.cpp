/********************************************************
* Main entry point for Hangman
* includes the game loop and the basic print info
* 
* Created by: Dennis Li (dennis.li@ubisoft.com)
********************************************************/

#include <time.h>
#include "Puzzle.h"
#include "LetterFunction.h"

int main(int argc, char** argv)
{	
	srand(time(NULL));
	Puzzle p("dictionary_many.txt");	
	std::string strInput;
	//p.displayWordList();                      //uncomment to see the word list loaded for the game
	LetterFunction *lf = new LetterFunction();
	
	while(p.isGame())
	{		
		p.initPuzzle();
						
		while (p.isGame() && p.isAlive() && !p.isWin() )
		{
			system("cls");
			
			p.displayGallows(p.getLives());
			std::cout << "Hangman! Current Lives: " << p.getLives() << " | wins: " << p.getWins() << " | losses: " << p.getLosses() << "\n\n";
			p.displayPuzzleString();
			p.displayBoard();
			
			std::cout << "Guess a letter > ";
			std::cin >> strInput;
			
			if(strInput.size() == 1) //single char input
			{
				char cInput = lf->check(strInput[0]);
				
				if(p.isInBoard(cInput))
				{
					int ansIndex = p.findInAnswer(cInput);
					if(ansIndex == std::string::npos) //wrong letter
						p.loseLife();
					else //right letter
						p.openPuzzle(ansIndex);
				}
				else //no longer in board
					p.loseLife();
			}
			else if(strInput == "quit" || strInput == "exit") //multi char input			
				p.endGame();
			else
				std::cout << "invalid input!" << std::endl;
				
			system("pause");
				
			if(p.isWin())
			{
				system("cls");
				
				p.displayGallows(p.getLives());
				std::cout << "Hangman! Current Lives: " << p.getLives() << " | wins: " << p.getWins() << " | losses: " << p.getLosses() << "\n\n";
				p.displayPuzzleString();
				p.displayBoard();
			
				p.addWin();
				std::cout << "\nCongratulations, you correctly guessed the word [" << p.getAnswer() << "]!" << std::endl;
				
				system("pause");
			}
			else if(!p.isAlive())
			{
				system("cls");
				
				p.displayGallows(p.getLives());
				std::cout << "Hangman! Current Lives: " << p.getLives() << " | wins: " << p.getWins() << " | losses: " << p.getLosses() << "\n\n";
				p.displayPuzzleString();
				p.displayBoard();
				
				p.addLoss();
				std::cout << "\nSorry, the correct word is [" << p.getAnswer() << "]!" << std::endl;
				
				system("pause");
			}
		}			
	}	
	delete lf;
	
	return 0;
}
