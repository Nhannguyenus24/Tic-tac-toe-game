#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void drawBoard(char* spaces);
void deleteBoard(char* spaces);
void playerMove(char* spaces, char player);
void computerMove(char* spaces, char computer);
bool checkWinner(char* spaces, char player, char computer);
bool checkTie(char* spaces);
int main()
{
	char spaces[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	char player = 'X';
	char computer = 'O';
	bool running;
	bool choice;
again:
	deleteBoard(spaces);
	running = true;
	system("cls");
	drawBoard(spaces);
	while (running) {
		playerMove(spaces, player);
		drawBoard(spaces);
		if (checkWinner(spaces, player, computer)) {
			running = false;
			break;
		}
		else if (checkTie(spaces)) {
			running = false;
			break;
		}
		system("cls");
		computerMove(spaces, computer);
		drawBoard(spaces);
		if (checkWinner(spaces, player, computer)) {
			running = false;
			break;
		}
		else if (checkTie(spaces)) {
			running = false;
			break;
		}
	}
	cout << "Enter 1 to play again or enter 0 to quit." << endl;
	cout << "Your choice: "; cin >> choice;
	if (choice == 1)
		goto again;
	else
	cout << "THANKS FOR PLAYING!" << endl;
	return 0;
}
void drawBoard(char* spaces) {
	cout << "     |     |     " << endl;
	cout << "  "<< spaces[0]<<"  |  "<<spaces[1]<<"  |  " << spaces[2] << "  " << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
	cout << "     |     |     " << endl;
	cout << endl;
}
void playerMove(char* spaces, char player) {
	int number;
	Again:
		cout << "Enter a spot to place a market (1-9): ";
		cin >> number;
		number--;
		if (number < 0 || number>8 || spaces[number] != ' ') {
			cout << "Enter wrong spot. Please try again!" << endl;
			goto Again;
		}
		spaces[number] = 'X';
}
void computerMove(char* spaces, char computer) {
	int number;
	srand(time(0));
	while (true) {
		number = rand() % 9;
		if (spaces[number] == ' ') {
			spaces[number] = 'O';
			break;
		}
	}
}
bool checkWinner(char* spaces, char player, char computer) {
	if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[0] == spaces[2]) {
		system("cls"); drawBoard(spaces);
		if (spaces[0] == player) cout << "YOU WIN!" << endl;
		else cout << "YOU LOSE!" << endl;
	}
	else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) {
		system("cls"); drawBoard(spaces);
		if (spaces[3] == player) cout << "YOU WIN!" << endl;
		else cout << "YOU LOSE!" << endl;
	}
	else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]) {
		system("cls"); drawBoard(spaces);
		if (spaces[6] == player) cout << "YOU WIN!" << endl;
		else cout << "YOU LOSE!" << endl;
	}
	else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) {
		system("cls"); drawBoard(spaces);
		if (spaces[0] == player) cout << "YOU WIN!" << endl;
		else cout << "YOU LOSE!" << endl;
	}
	else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) {
		system("cls"); drawBoard(spaces);
		if (spaces[1] == player) cout << "YOU WIN!" << endl;
		else cout << "YOU LOSE!" << endl;
	}
	else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) {
		system("cls"); drawBoard(spaces);
		if (spaces[2] == player) cout << "YOU WIN!" << endl;
		else cout << "YOU LOSE!" << endl;
	}
	else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[0] == spaces[8]) {
		system("cls"); drawBoard(spaces);
		if (spaces[0] == player) cout << "YOU WIN!" << endl;
		else cout << "YOU LOSE!" << endl;
	}
	else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) {
		system("cls"); drawBoard(spaces);
		if (spaces[2] == player) cout << "YOU WIN!" << endl;
		else cout << "YOU LOSE!" << endl;
	}
	else
		return false;
	return true;
}
bool checkTie(char* spaces) {
	for (int i = 0; i < 9; i++) {
		if (spaces[i] == ' ')
			return false;
	}
	cout << "YOU DRAW!" << endl;
	return true;
}
void deleteBoard(char* spaces) {
	for (int i = 0; i < 9; i++)
		spaces[i] = ' ';
}
