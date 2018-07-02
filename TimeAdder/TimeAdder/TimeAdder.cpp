// TimeAdder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <string>

using namespace std;

set<string> exitCodes = { "q", "Q" };
set<string> helpCodes = { "h", "H" };

bool isCode(set<string> codes, string input) {
	return codes.count(input);
}

void handleHelp() {
//	cout << "\nhh:mm:ss - add time\n";
//	cout << "x[number] - change modifier\n";
	cout << "h - help\n";
//	cout << "s - start/stop\n";
//	cout << "r - reset\n";
	cout << "q - quit\n\n";
}

int main()
{
	handleHelp();
	string input;
	do {
		cin >> input;
		if (isCode(helpCodes, input)) {
			handleHelp();
		}
	} while (!isCode(exitCodes, input));

	/*
	int input;
	do {
		input = getchar();
		putchar(input);
		cout << input << "\n";
	} while (!exitCodes.count(input));
	*/
	return 0;
}

