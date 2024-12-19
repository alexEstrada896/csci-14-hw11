/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>
#include <cstdlib>
//global constants for the width and length of house
const int HOUSEROW = 3;
const int HOUSECOLUM = 3;


//fulBoardCheck: checks if the board is full for a tie
int fullBoardcheck( char board [HOUSEROW][HOUSECOLUM] )
{
	for ( int i = 0; i < HOUSEROW ; i++)
	{
		for (int j = 0 ; j < HOUSECOLUM; j++)
		{
			if (board [i][j] == '*')
			{
				return 0;
			}
			
		}
	}
	return 1;
}

//winnerCheck: checks for three horizontal ,vertical or diaginal for a win
int winnerCheck (char board[HOUSEROW][HOUSECOLUM], char symbol)
{
	//checks for horizontal and vertical
	for (int i = 0 ; i < HOUSEROW ; i++)
	{
		if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) ||
		        (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol))
		{
			return 1 ;
		}

	}
//checks diaginal
	if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
	        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
	{
		return 1;
	}

	return 0;
}

//funcrion startBoard: initializes all symbols in the house to * before the game starts
void startBoard(char board [HOUSEROW][HOUSECOLUM])
{
	for (int i = 0; i < HOUSEROW ; i++)
	{
		for ( int j = 0 ; j < HOUSECOLUM ; j++)
		{
			board[i][j] = '*';
		}
	}
}

//function showBoard: function to show the hounted house
void showBoard (char board [HOUSEROW][HOUSECOLUM])
{
	cout << "Haunted House:" << endl;
	for (int i = 0 ; i < HOUSEROW ; i++)
	{
		for (int j = 0 ; j < HOUSECOLUM ; j++)
		{
			cout << board[i][j]<<" ";
		}
		cout <<endl;
	}
}
int main()

{



	char boardArray[HOUSEROW][HOUSECOLUM]; //aray that carries the symbols in the house

	startBoard(boardArray);

	int row, colum;
	char userSymbol;
	string playerNumber;

	cout << "Become the Master of the Haunted House!" << endl;

	
	for (int i = 0 ; i < 9 ; i++)// loop to represent what happens througout the 9 rounds of the game
	{
		showBoard(boardArray);//shows haunted house

		if ( i % 2 == 0)// checks for player 1 or 2 based on the turns 
		{
			userSymbol = 'X';
			playerNumber = "Player 1 the witch";
		}
		else
		{
			userSymbol = 'O';
			playerNumber = "Player 2 the ghost";
		}


		cout << playerNumber << ", in which room do you want to cast a spell (row column)? ";
		cin >> row >> colum;

		row = row - 1;//subtracts one to track the subscript
		colum = colum - 1;

		//validates input
		while (row < 0 || row >= HOUSEROW || colum < 0 || colum >= HOUSECOLUM || boardArray [row][colum] != '*')
		{
			cout <<"Room " << (row + 1) << ' ' << (colum + 1) << " is already taken or invalid, please choose another room: ";
			cin >> row >>colum;

			row = row - 1;
			colum = colum - 1;
		}

		boardArray[row][colum]= userSymbol;

		//checks for a winner after each turn 
		if (winnerCheck(boardArray, userSymbol) == 1)
		{
			showBoard(boardArray);
			cout << playerNumber << " has won! "<<playerNumber<<" is master of the haunted house! "<<endl;
           return 0; 
		}
		//checks for a tie after each turn
		if (fullBoardcheck(boardArray) == 1) 
		{
            showBoard(boardArray);
            cout << "It's a tie! No one claimed the haunted house." << endl;
        return 0;
		}
}
	return 0;
    
}
	
	
