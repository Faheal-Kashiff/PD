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
	printPlayer(3,3);

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
	cout<<"P"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	
}