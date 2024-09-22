#include <iostream>
using namespace std;

int main()
{

string name;
int target;

cout<< "Enter the name of the person: ";
cin>> name;

cout << "Enter the target weight loss in Kg: ";
cin >> target;

cout << name << " will need " << target * 15 << " days to lose " << target << " Kgs of weight by following the docto's suggestion";

return 0;
}