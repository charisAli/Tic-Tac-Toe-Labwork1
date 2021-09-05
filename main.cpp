#include "player.h"
#include <iostream>

using namespace std;

int main() {

	player p1("Yusuf", 7, 10);
	player p2("Jamal", 5, 10);
	cout << "1. ";
	cout << "username : " << p1.getUsername() << endl;
	cout << "   match    : " << p1.getMatchCount() << endl;
	cout << "   win      : " << p1.getWinCount() << endl; 
	cout << endl;
	cout << "2. ";
	cout << "username : " << p2.getUsername() << endl;
	cout << "   match    : " << p2.getMatchCount() << endl; 
	cout << "   win      : " << p2.getWinCount() << endl; 
}