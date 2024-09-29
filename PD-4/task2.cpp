#include<iostream>
using namespace std;

void Reverse(string);

int main()
{
	string x;
	
	cout<<"Enter 'true' or 'false': ";
	cin>>x;
	
	Reverse(x);
	
	return 0;
}

void Reverse(string x)
{
	if (x == "true" || x == "True")
	cout<<"False";
	else if (x == "false" || x == "False")
	cout<<"True";
	else
	cout<<"Invalid Input";
}