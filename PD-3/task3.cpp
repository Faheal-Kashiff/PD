#include<iostream>
using namespace std;

int main ()
{

int vi, accl, t;

cout<< "Enter initial Velocity (m/s): ";
cin >> vi;

cout << "Enter acceleration (m/s^2): ";
cin >> accl;

cout << "Enter Time (s)";
cin >> t;

cout << "Final Velocity (m/s): " << vi + (accl*t);

return 0;
}