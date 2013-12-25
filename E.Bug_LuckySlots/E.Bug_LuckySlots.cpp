//	Project Name:		LuckySlots.cpp 
//	Project Purpose:	A jackpot game written in C++
//	Changelog:			J.Salce 8/12/13

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	
	//Declare Variables

	char selection;
	int d1, d2, d3;
	string playAgain;
	do
	{
	cout << "\t*****************************\n"
		<<	"\t** Welcome to Lucky Slots!!**\n"
		<<	"\t*****************************\n\n";

	cout << "\t 01. SPIN IT TO WIN IT\n"
		<< "\t 02. How To Play\n"
		<< "\t 03. Exit <exit or x>"
		<< "\n\nPlease enter a number between 1-3: ";

	cin >> selection;
	
	switch (selection)
	{
	case '1':
		{
			cout << "\n\tYipeee!! Good Luck! \n\n";
			//Call srand function
			srand(time(NULL));
			d1 = (rand() % 6) + 1;
			d2 = (rand() % 6) + 1;
			d3 = (rand() % 6) + 1;

			//Display numbers to users
			cout << "\n \t*****" << "\t*****" << "\t*****" << endl;
			cout << "\t*   *" << "\t*   *" << "\t*   *" << endl;
			cout << "\t* " << d1 << "\t* " << d2 << " *" << "\t* " << d3 << " *" << endl;;
			cout << "\t*   *" << "\t*   *" << "\t*   *" << endl;
			cout << "\t*****" << "\t*****" << "\t*****" << endl << endl;

			if (d1 == d2 && d2 == d3)
			{
				cout << "\t$$$$ JACKPOT!! $$$$\n\n";
			}
			else
			{
				cout << "\tYou didn't win today sorry. \n\n";
			}				
		}
		break;
	case '2':
		{
			//Display output
			cout << "\t*****************************\n"
			<<	"\tHow To Play**\n"
			<<	"\t*****************************\n\n";

			cout << "\t Spin the slots \n"
			<< "\t If you get three matching numbers, you win!\n"
			<< "\t Ready to play? \n\n";
		}
		break;
	case '3':
		{
			//Display exit
			cout << "\nThanks for playing! \n\n";
			return 0;
		}
		break;
		//Check for valid input
	default: cout << "Please enter a valid input between 1-3\n\n";
		break;
	}
	cout << "\n\n\tWould you like to play again?: <enter yes or no> ";
		cin.ignore();
		getline(cin,playAgain);

	} while (playAgain != "no");	
	cout << "\n\tThanks for playing!!! \n\n";
	return 0;
}

