#include <iostream>
using namespace std;

int main()
{

int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
long result;

cout << "Number 01: ";
cin >> n1;
cout << "Number 02: ";
cin >> n2;
cout << "Number 03: ";
cin >> n3;
cout << "Number 04: ";
cin >> n4;
cout << "Number 05: ";
cin >> n5;
cout << "Number 06: ";
cin >> n6;
cout << "Number 07: ";
cin >> n7;
cout << "Number 08: ";
cin >> n8;
cout << "Number 09: ";
cin >> n9;
cout << "Number 10: ";
cin >> n10;
cout << "Number 11: ";
cin >> n11;
cout << "Number 12: ";
cin >> n12;
cout << "Number 13: ";
cin >> n13;
cout << "Number 14: ";
cin >> n14;
cout << "Number 15: ";
cin >> n15;


result = ( (n1+n2+n3+n4+n5) + (n6*n7*n8*n9*n10) ) - (n11-n12-n13-n14-n15);

cout << "The final result is: " << result;


return 0;
}