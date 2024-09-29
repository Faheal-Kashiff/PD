#include<iostream>
using namespace std;

void possibleBonus(int, int);

int main()
{
	int position, friendPosition;
	
	cout<<"Enter you position: ";
	cin>>position;
	
	cout<<"Enter your friend's position: ";
	cin>>friendPosition;
	
	possibleBonus(position, friendPosition);
	
}

void possibleBonus(int position, int friendPosition)
{
	if( (friendPosition - position)<=6 )
	cout<<"true";
	else
	cout<<"false";
	
}