#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printName();


int main()
{
	system("cls");
	printName();
	
	return 0;
}


void printName()
{
	gotoxy(11,17); cout<<" %%%%%%%%%  %%%%%%   %%    %%  %%%%%%%%   %%%%%%   %%          %%     %%   %%%%%%    %%%%%%   %%    %%  %%%%%%%%  %%%%%%%%%  %%%%%%%%% "<<endl;
	gotoxy(11,18); cout<<" %%        %%    %%  %%    %%  %%        %%    %%  %%          %%   %%    %%    %%  %%    %%  %%    %%     %%     %%         %%        "<<endl;
	gotoxy(11,19); cout<<" %%        %%    %%  %%    %%  %%        %%    %%  %%          %% %%      %%    %%  %%        %%    %%     %%     %%         %%        "<<endl;
	gotoxy(11,20); cout<<" %%%%%%%%  %%%%%%%%  %%%%%%%%  %%%%%%%%  %%%%%%%%  %%          %%%%       %%%%%%%%   %%%%%%   %%%%%%%%     %%     %%%%%%%%   %%%%%%%%  "<<endl;
	gotoxy(11,21); cout<<" %%        %%    %%  %%    %%  %%        %%    %%  %%          %% %%      %%    %%        %%  %%    %%     %%     %%         %%        "<<endl;
	gotoxy(11,22); cout<<" %%        %%    %%  %%    %%  %%        %%    %%  %%          %%   %%    %%    %%  %%    %%  %%    %%     %%     %%         %%        "<<endl;
	gotoxy(11,23); cout<<" %%        %%    %%  %%    %%  %%%%%%%%  %%    %%  %%%%%%%%    %%     %%  %%    %%   %%%%%%   %%    %%  %%%%%%%%  %%         %%        "<<endl;
}


void gotoxy (int x, int y)
{
	COORD coordinates;
 	coordinates.X = x;
	coordinates.Y = y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}