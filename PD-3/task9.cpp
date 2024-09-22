#include <iostream>
using namespace std;

int main ()
{

int num, n1, n2, n3, n4;

cout << "Enter a 4-digit number: ";
cin >> num;


n1 = num%10;
num = num/10;
n2 = num%10;
num = num/10;
n3 = num%10;
num = num/10;
n4 = num;


cout << "Sum of individual digits: " << n1+n2+n3+n4;

return 0;
}