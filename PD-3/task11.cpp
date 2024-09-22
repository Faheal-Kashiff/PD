#include <iostream>
using namespace std;

int main()
{

int age, num_moved;

cout << "Enter the person's age: ";
cin >> age;

cout << "Enter the number of times they've moved: ";
cin >> num_moved;

cout << " Average number of years lived in the same house: " << age/(num_moved + 1);


return 0;
}