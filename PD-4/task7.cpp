#include <iostream>
using namespace std;

void calcPrice(int,int,int);

int main()
{
	int redRose, whiteRose, tulips;
	
	cout<<"Red Rose: ";
	cin>>redRose;
	
	cout<<"White Rose: ";
	cin>>whiteRose;
	
	cout<<"Tulips: ";
	cin>>tulips;
	
	calcPrice(redRose, whiteRose, tulips);
	
	return 0;
}

void calcPrice(int redRose, int whiteRose, int tulips)
{
	float originalPrice = (redRose * 2) + (whiteRose * 4.1) + (tulips * 2.5);
	
	cout<<"Original Price = $"<<originalPrice<<endl;
	
	if (originalPrice > 200)
	cout<<"Price after Discount: $"<< originalPrice - (originalPrice * 0.20);
	else
	cout<<"No discount applied";
	
	
}