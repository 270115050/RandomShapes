#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;


void drawTri(int);
void drawSqr(int);
void drawRec(int);
void drawDmnd(int);
int main()
{
	int max = 8, randNum = 0, prevRndNum = 0;
	srand(time(0));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	do {
		do {
			randNum = rand() % 4 + 1;
			if (randNum != prevRndNum) {
				prevRndNum = randNum;
				break;
			}						
		} while (true);
		
		switch (randNum) {
		case 1:
			SetConsoleTextAttribute(h, 10);
			drawTri(max);
			break;
		case 2:
			SetConsoleTextAttribute(h, 13);
			drawSqr(max);
			break;
		case 3:
			SetConsoleTextAttribute(h, 12);
			drawRec(max);
			break;
		case 4:
			SetConsoleTextAttribute(h, 11);
			drawDmnd(max);
			break;
		}	
		system("cls");
	} while (true);
}

void drawTri(int max) {
	cout << string(4, '\n');
	for (int i = 0; i < max; i++) {
		cout << string(5, '\t');
		for (int x = 0; x < max - i; x++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
		Sleep(30);
	}
	system("cls");
	for (int i = 0; i < max; i++) {
		cout << string(4, '\n');
		for (int k = 0; k < max - i; k++) {
			cout << string(5, '\t');
			for (int x = 0; x < max - k; x++) {
				cout << " ";
			}
			for (int j = 0; j <= k; j++) {
				cout << "* ";
			}
			cout << endl;
		}
		Sleep(30);
		system("cls");
	}
}

void drawSqr(int max) {
	system("cls");
	cout << string(4, '\n');
	for (int i = 0; i < max; i++) {
		cout << string(5, '\t');
		for (int j = 0; j < max; j++) {
			cout << "* ";
		}
		cout << endl;
		Sleep(30);
	}
	system("cls");

	for (int i = 0; i < max; i++) {
		cout << string(4, '\n');
		for (int k = 0; k < max - i; k++) {
			cout << string(5, '\t');
			for (int x = 0; x < max; x++) {
				cout << "* ";
			}
			cout << endl;
		}
		Sleep(30);
		system("cls");
	}
}

void drawRec(int max) {
	system("cls");
	cout << string(4, '\n');
	for (int i = 0; i < max; i++) {
		cout << "  " << string(4, '\t');
		for (int j = 0; j < max + 5; j++) {
			cout << "* ";
		}
		cout << endl;
		Sleep(30);
	}
	system("cls");
	for (int i = 0; i < max; i++) {
		cout << string(4, '\n');
		for (int k = 0; k < max - i; k++) {
			cout << "  " << string(4, '\t');
			for (int x = 0; x < max + 5; x++) {
				cout << "* ";
			}
			cout << endl;
		}
		Sleep(30);
		system("cls");
	}
}

void drawDmnd(int max) {

	cout << string(3, '\n');
	for (int i = 0; i < max; i++) {
		cout << string(5, '\t');
		for (int x = 0; x < max - i; x++)
			cout << " ";
		for (int j = 0; j < i; j++) 
			cout << "* ";
		cout << endl;
		Sleep(30);	
	}

	for (int i = 0; i < max; i++) {
		cout << string(5, '\t');
		for (int x = max - i; x < max; x++)
			cout << " ";
		for (int j = 0; j < max - i; j++)
			cout << "* ";
		cout << endl;
		Sleep(30);
	}
	system("cls");
	for (int z = 0; z < max; z++) {
		cout << string(3, '\n');
		for (int i = 0; i < max; i++) {
			cout << string(5, '\t');
			for (int x = 0; x < max - i; x++)
				cout << " ";
			for (int j = 0; j < i; j++)
				cout << "* ";
			cout << endl;
		}
		for (int i = 0; i < max - z; i++) {
			cout << string(5, '\t');
			for (int x = max - i; x < max; x++)
				cout << " ";
			for (int j = 0; j < max - i; j++)
				cout << "* ";
			cout << endl;
		}
		Sleep(30);
		system("cls");
	}
	for (int z = 0; z < max; z++) {
		cout << string(3, '\n');
		for (int i = 0; i < max - z; i++) {
			cout <<string(5, '\t');
			for (int x = 0; x < max - i; x++)
				cout << " ";
			for (int j = 0; j < i; j++)
				cout << "* ";
			cout << endl;
		}
		Sleep(30);
		system("cls");
	}
}