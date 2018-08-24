
#include<iostream>
#include<string>
#include<cstring>
#include"help.h"
using namespace std;
//Script
int main() {
	int i = 0;
	int v = 0;
	int up = 0;
	int across = 0;
	char guess = 'x';
	char x = 1;
	char y = 1;
	int turnCount = 0;
	bool restart = true;
	bool gameState = true;
	while (gameState) {
		char board[3][3]
		{
			{ '1', '2', '3' },
		{ '4', '5', '6' },
		{ '7', '8', '9' }
		};
		cout << "\n";
		cout << "What is the number that you desire 0-2 for and across and x or o for your mark" << endl;
		cout << "NO TWO NUMBERS OCCUPY ONE SPACE";
		cout << "\n";
		cout << "Restart? t or f" << endl;
		char menuItem = 't';
		if (cin >> menuItem){
			restart = true;
		}
		while (restart) {
			CreateBoard(board, up, across, guess);
			cout << "\n";
			cin >> up;
			cin >> across;
			cin >> guess;
			board[up][across] = guess;
			turnCount++;
			cout << "What is the number that you desire 0-2 for and across and x or o for your mark" << endl;
			if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {

				if ('x' == board[0][0]) {
					cout << "\n";
					cout << "Win P1 Lose P2" << endl;
					restart = false;
				}
				else if ('o' == board[0][0]) {
					cout << "\n";
					cout << "Lose P1 Win P2" << endl;
					restart = false;
				}
			}
			if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {

				if ('x' == board[1][0]) {
					cout << "\n";
					cout << "Win P1 Lose P2" << endl;
					restart = false;
				}
				else if ('o' == board[1][0]) {
					cout << "\n";
					cout << "Lose P1 Win P2" << endl;
					restart = false;
				}
			}
			if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {

				if ('x' == board[2][0]) {
					cout << "\n";
					cout << "Win P1 Lose P2" << endl;
					restart = false;
				}
				else if ('o' == board[2][0]) {
					cout << "\n";
					cout << "Lose P1 Win P2" << endl;
					restart = false;
				}
			}
			if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {

				if ('x' == board[0][0]) {
					cout << "\n";
					cout << "Win P1 Lose P2" << endl;
					restart = false;
				}
				else if ('o' == board[0][0]) {
					cout << "\n";
					cout << "Lose P1 Win P2" << endl;
					restart = false;
				}
			}
			if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {

				if ('x' == board[0][1]) {
					cout << "\n";
					cout << "Win P1 Lose P2" << endl;
					restart = false;
				}
				else if ('o' == board[0][1]) {
					cout << "\n";
					cout << "Lose P1 Win P2" << endl;
					restart = false;
				}
			}
			if ((board[0][2] == board[2][2]) && (board[1][2] == board[2][2])) {

				if ('x' == board[0][2]) {
					cout << "\n";
					cout << "Win P1 Lose P2" << endl;
					restart = false;
				}
				else if ('o' == board[0][2]) {
					cout << "\n";
					cout << "Lose P1 Win P2" << endl;
					restart = false;
				}
			}
			if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {

				if ('x' == board[0][0]) {
					cout << "\n";
					cout << "Win P1 Lose P2" << endl;
					restart = false;
				}
				else if ('o' == board[0][0]) {
					cout << "\n";
					cout << "Lose P1 Win P2" << endl;
					restart = false;
				}
			}
			if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])) {

				if ('x' == board[0][2]) {
					cout << "\n";
					cout << "Win P1 Lose P2" << endl;
					restart = false;
				}
				else if ('o' == board[0][2]) {
					cout << "\n";
					cout << "Lose P1 Win P2" << endl;
					restart = false;
				}
			}
			if (turnCount >= 9){
				cout << "Draw game will now restart";
				cout << "\n";
				turnCount = 0;
				break;
				restart = true;
				
			}
		}
	}

	return (0);
}