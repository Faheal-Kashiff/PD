#include <iostream>
using namespace std;

int main ()
{

int mins, fps;

cout<< "Number of Minutes: ";
cin >> mins;

cout << "Frames per Second: ";
cin >> fps;

cout << "Total no. of frames: " << fps*60*mins;

return 0;
}