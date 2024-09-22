#include<iostream>
using namespace std;

int main()
{

int size, cost, area;

cout << "Enter the size of the fertilizer bag in pounds: ";
cin >> size;

cout << "Enter the cost of the bag: $";
cin >> cost;

cout << "Enter the area in square feet that can be covered by the bag: ";
cin >> area;

cout << "Cost of fertilizer per pound: $" << float(cost)/float(size) << endl;
cout << "Cost of fertilizing per square foot: $" << float(cost)/float(area);


return 0;
}