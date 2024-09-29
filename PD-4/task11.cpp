#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int, int);

int main()
{
	system("cls");
	cout<<"test";
	
	gotoxy(15,15);
	cout<<"My name is Faheal Kashiff";
	
	return 0;
}


void gotoxy(int x, int y)
{
 	COORD coordinates;
 	coordinates.X = x;
	coordinates.Y = y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
