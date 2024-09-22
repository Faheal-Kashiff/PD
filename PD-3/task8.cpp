#include <iostream>
using namespace std;

int main()
{

float veg_price, fruit_price, earning_coins, earning_rps;
int kgs_veg, kgs_fruit;


cout << "Enter vegetable price per kilogram (in coins): ";
cin >> veg_price;

cout << "Enter fruit price per kilogram (in coins): ";
cin >> fruit_price;

cout << "Enter total kilograms of vegetables: ";
cin >> kgs_veg;

cout << "Enter total kilograms of fruit: ";
cin >> kgs_fruit;


earning_coins = (veg_price * kgs_veg) + (fruit_price * kgs_fruit);
earning_rps = earning_coins/1.94;

cout << "Total Earning in Rupees (Rs): " << earning_rps;


return 0;
}