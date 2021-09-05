#include "board.h"
board::board() {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			aBoard[x][y]= ' ';
		}
	}
}
bool board::isFull() {
	for (int x; x < 3; x++) {
		for (int y; y < 3; y++) {
			if (aBoard[x][y] = ' ')
				return true;
			else
				return false;
		}
	}
}
bool board::isEmpty(int x, int y) {
	if (aBoard[x][y] = ' ')
		return true;
	else
		return false;
}
char board::getValueAtIndex(int x, int y) {
	return aBoard[x][y];
}
void board::setValueAtIndex(int x, int y, char value) {
	aBoard[x][y] = value;
}
char board::checkSimilarValueVertically() {
	int count = 0;
	for (int x; x < 3; x++) {
		for (int y; y < 3; y++) {
			if (aBoard[0][y] != aBoard[x][y] && aBoard[x][y] != ' ') {
				break;
			}
			else
				count++;
		}
		if (count == 2) {
			return aBoard[x][0];
		}
		else
			return ' ';
	}
}
char board::checkSimilarValueHorizontally() {
	int count = 0;
	for (int x; x < 3; x++) {
		for (int y; y < 3; y++) {
			if (aBoard[0][y] != aBoard[x][y] && aBoard[x][y] != ' ') {
				break;
			}
			else
				count++;
		}
		if (count == 2) {
			return aBoard[x][0];
		}
		else
			return ' ';
	}
}