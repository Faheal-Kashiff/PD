#include<iostream>
using namespace std;

int main()
{

int n;

cout << "Enter the number of sides of the Polygon: ";
cin >> n;

cout << "The sum of internal angles of a " << n << "-sided polygon is: " << (n-2) * 180;

return 0;
}