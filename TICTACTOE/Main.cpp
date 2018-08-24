#include<iostream>
#include<string>
#include <cstring> 
using namespace std;
//Script
int main() {
	int i = 0;
	int t = 0;
	int x = 0;
	int y = 0;
	int q = 0;
	char x = 0;
	char y = 0;
	int board[3][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};
	cout << "What is the number that you desire 0-2 qore for your mark" << endl;

	for (int i = 0; i < 3; ++i) {
		cout << "\n";
		for (int v = 0; v < 3; ++v)
		{
			cout << board[i][v];
		}

	}
	cin >> x;
	cin >> y;
	cin >> q;
	for (int i = 0; i < 3; ++i) {
		cout << "\n";
		for (int v = 0; v < 3; ++v)
		{
		if (v&i == x & y) {

			}
			cout << board[i][v];
		}

	}
	
	return (0);
}