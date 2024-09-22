#include<iostream>
using namespace std;

int main ()
{

string name;
int adult_price, child_price, num_adult, num_child, charity, total_amount, donation, rem_amount;

cout << "Enter the movie name: ";
cin >> name;

cout << "Enter the adult ticket price: $";
cin >> adult_price;

cout << "Enter the child ticket price: $";
cin >> child_price;

cout << "Enter the number of adult tickets sold: ";
cin >> num_adult;

cout << "Enter the number of child tickets sold: ";
cin >> num_child;

cout << "Enter the percentage of amount to be donated to charity: %";
cin >> charity;

total_amount = (adult_price * num_adult) + (child_price * num_child);
donation = (float(total_amount * charity)/100);
rem_amount = total_amount - donation;

cout << "Movie: " << name << endl;
cout << "Total amount generated from ticket sales: $" << total_amount << endl;
cout << "Donation to Charity (" << charity << "%): %" << endl;
cout << "Remaining amount after donation: $" << rem_amount;

return 0;
}