#include <iostream>
using namespace std;

int main()
{

int imp_count, pl_count;

cout << "Enter Imposter Count: ";
cin >> imp_count;

cout << "Enter Player Count: ";
cin >> pl_count;

cout << "Chance of being an Imposter: " << (float(imp_count)/float(pl_count))*100 << "%";

return 0;
}
