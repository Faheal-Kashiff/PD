#include<iostream>
using namespace std;

void isEqual(int, int);

int main()
{
	int num1, num2;
	
	cout<<"Enter the First Number: ";
	cin>>num1;
	
	cout<<"Enter the Second Number: ";
	cin>>num2;
	
	isEqual(num1,num2);
	
	return 0;
}

void isEqual(int num1, int num2)
{
	if (num1 == num2)
		cout<<"true";
	else
		cout<<"false";
	
}