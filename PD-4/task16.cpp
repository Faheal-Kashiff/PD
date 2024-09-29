#include<iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printMaze();
void printPlayer(int, int);

int main()
{
	system("cls");
	printMaze();
	
	int x = 10, y = 1;
	
	while(true)
	{
		printPlayer(x,y);
		y++;
		if (y == 10)
			y = 1;
	}

	return 0;
}


void gotoxy(int x, int y)
{
 	COORD coordinates;
 	coordinates.X = x;
	coordinates.Y = y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printMaze()
{
	
	cout<<"###########################"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"###########################"<<endl;
	
}


void printPlayer(int x, int y)
{
	gotoxy(x,y);
	cout<<"Patrol";
	Sleep(100);
	gotoxy(x,y);
	cout<<"      ";
	
}