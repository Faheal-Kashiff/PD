#include <iostream>
using namespace std;

void tpCheck (int, int);

int main()
{
	int people, tp;
	
	cout<<"Number of people in household: ";
	cin>>people;
	
	cout<<"Number of rolls: ";
	cin>>tp;
	
	tpCheck(people, tp);
	
	
	return 0;
}

void tpCheck (int people, int tp)
{
	int sheets = tp*500;
	int numOfDays = sheets / (people *57);
	
	if (numOfDays >= 14)
	cout<<"Your TP will last "<<numOfDays<< " days, no need to panic"; 
	if (numOfDays < 14)
	cout<<"Your TP will last "<<numOfDays<< " days, buy more"; 
	
}