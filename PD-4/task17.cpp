#include<iostream>
#include<windows.h>
using namespace std;

void printMenu();
void calculateAggregate(string, int, int, int);
void compareMarks(string, int, string, int);
void gotoxy(int, int);

int main()
{
	string name, nameStd1, nameStd2;
	int matricMarks, interMarks, ecatMarks, ecatMarksStd1, ecatMarksStd2;
	char choice;

	printMenu();

	gotoxy(76, 23); cout<<"MENU"<<endl<<endl;
	gotoxy(48, 25); cout<<"Enter 'A' to calculate aggregate and 'C' to compare merit: ";
	cin>>choice;

	if (choice == 'A' || choice == 'a')
	{
		cout<<"Enter your Name: "; 
		cin>>name;
		cout<<"Enter your Matriculation Marks (out of 1100): ";
		cin>>matricMarks;
		cout<<"Enter your Intermediate Marks:(out of 550): ";
		cin>>interMarks;
		cout<<"Enter you ECAT Marks: ";
		cin>>ecatMarks;
		
		calculateAggregate(name, matricMarks, interMarks, ecatMarks);

	}

	if (choice == 'C' || choice == 'c')
	{
		cout<<"Enter first student's name: "; 
		cin>>nameStd1;
		cout<<"Enter first student's ecat marks: ";
		cin>>ecatMarksStd1;
		cout<<"Enter second student's name: ";
		cin>>nameStd2;
		cout<<"Enter second student's ecat marks: ";
		cin>>ecatMarksStd2;
		
		compareMarks( nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
	}

	
	
	return 0;
}

 
void printMenu()
{
	system("cls");
	
	gotoxy(50,7); cout<<"#########################################################"<<endl;
	gotoxy(50,8); cout<<"##                                                     ##"<<endl;
	gotoxy(50,9); cout<<"##          %%      %%   %%%%%%%%%  %%%%%%%%%%         ##"<<endl;
	gotoxy(50,10); cout<<"##          %%      %%   %%             %%             ##"<<endl;
	gotoxy(50,11); cout<<"##          %%      %%   %%             %%             ##"<<endl;
	gotoxy(50,12); cout<<"##          %%      %%   %%%%%%%%%      %%             ##"<<endl;
	gotoxy(50,13); cout<<"##          %%      %%   %%             %%             ##"<<endl;
	gotoxy(50,14); cout<<"##           %%    %%    %%             %%             ##"<<endl;
	gotoxy(50,15); cout<<"##             %%%%      %%%%%%%%%      %%             ##"<<endl;
	gotoxy(50,16); cout<<"##                                                     ##"<<endl;
	gotoxy(50,17); cout<<"#########################################################"<<endl;
}


void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks)
{
	float aggregate = ((float(matricMarks)/1100.0)*30) + ((float(interMarks)/550)*30) + ((float(ecatMarks)/400)*40);
	
	cout<<"Aggregate = "<< aggregate <<"%";
}


void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
	
	if(ecatMarksStd1 > ecatMarksStd2)
	cout<<nameStd1<< " will get the first roll number";
	else
	cout<<nameStd2<< " will get the first roll number";

}

void gotoxy(int x, int y)
{
 	COORD coordinates;
 	coordinates.X = x;
	coordinates.Y = y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}