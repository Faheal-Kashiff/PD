#include<iostream>
using namespace std;

void pet(int);

int main()
{
	int holidays;

	cout<<"Holidays: ";
	cin>>holidays;
	
	pet (holidays);
	
	return 0;
}

void pet(int holidays)
{
	int hours, minutes;
	long difference;
	int workingDays = 365 - holidays;
	long gametime = (holidays * 127) + (workingDays * 63);

	if (gametime < 30000)
	{
	cout<<"Tom will sleep well";
	difference = 30000-gametime;
	}

	if (gametime > 30000)
	{
	cout<<"Tom will run away";
	difference = gametime-30000;
	}
	
	if (difference > 59)
		{
			hours = difference/60;
			minutes = ((double(difference)/60.0) - hours) * 60;
			cout<<endl<<hours<<" hours and "<<minutes<<" minutes for play";
		}
	else
	cout<<endl<<minutes<<" minutes for play";
	
	
}