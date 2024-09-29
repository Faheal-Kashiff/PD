#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printH();
void printA();
void printS();
void printN();

int main()
{
	system("cls");

	gotoxy(0,1);
	printH();
	gotoxy(0,9);
	printA();
	gotoxy(0,17);
	printS();
	gotoxy(0,25);
	printS();
	gotoxy(0,33);
	printA();
	gotoxy(0,41);
	printN();

	return 0;
}

void printH()
{
	cout<<" %%    %% "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%%%%%%% "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%    %% "<<endl;
}

void printA()
{
	cout<<"  %%%%%%  "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%%%%%%% "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%    %% "<<endl;
}

void printS()
{
	cout<<"  %%%%%%  "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<" %%       "<<endl;
	cout<<"  %%%%%%  "<<endl;
	cout<<"       %% "<<endl;
	cout<<" %%    %% "<<endl;
	cout<<"  %%%%%%  "<<endl;
}

void printN()
{
	cout<<endl<<" %%%     %% "<<endl;
	cout<<" %%%%    %% "<<endl;
	cout<<" %% %%   %% "<<endl;
	cout<<" %%  %%  %% "<<endl;
	cout<<" %%   %% %% "<<endl;
	cout<<" %%    %%%% "<<endl;
	cout<<" %%     %%% "<<endl;
}

void gotoxy (int x, int y)
{
	COORD coordinates;
 	coordinates.X = x;
	coordinates.Y = y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}