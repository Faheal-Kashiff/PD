#include <iostream>
using namespace std;

int main()
{

int sq_meters, width, height;

cout<< "Number of square meters you can paint: ";
cin >> sq_meters;

cout << "Width of single wall (meters): ";
cin >> width;

cout << "Height of single wall (meters): ";
cin >> height;

cout << "Number of walls you can paint: " << sq_meters/(width * height);

return 0;
}