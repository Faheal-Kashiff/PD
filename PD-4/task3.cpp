#include<iostream>
using namespace std;

void calcDiscount(string, int);

int main()
{
	string countryName;
	int ticketPrice;
	
	cout<<"Enter the country's name: ";
	cin>>countryName;
	
	cout<<"Enter the ticket price: $";
	cin>>ticketPrice;
	
	calcDiscount(countryName, ticketPrice);
	
	return 0;
}

void calcDiscount(string countryName, int ticketPrice)
{
	if (countryName == "Pakistan")
	cout<<"Final Ticket Price after discount: $"<< ticketPrice - (ticketPrice * 0.05);
	else if (countryName == "Ireland")
	cout<<"Final Ticket Price after discount: $"<< ticketPrice - (ticketPrice * 0.1);
	else if (countryName == "India")
	cout<<"Final Ticket Price after discount: $"<< ticketPrice - (ticketPrice * 0.2);
	else if (countryName == "England")
	cout<<"Final Ticket Price after discount: $"<< ticketPrice - (ticketPrice * 0.3);
	else if (countryName == "Canada")
	cout<<"Final Ticket Price after discount: $"<< ticketPrice - (ticketPrice * 0.45);
	else
	cout<<"Invalid Input";
}