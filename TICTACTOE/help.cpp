//help.h
#include<iostream>
#include"help.h"
using namespace std;

void CreateBoard(char board[3][3], int Up ,int Across, char Guess){
	
	for (int i = 0; i < 3; ++i) {
		cout << "\n";
		for (int v = 0; v < 3; ++v)
		{
			cout << board[i][v];
		}

	}
}