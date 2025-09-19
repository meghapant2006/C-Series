#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << "\n";

    string myString = "Hello";
    cout << myString[0] << "\n";

    string myStringg = "megha";
    myStringg[4] = 'A';
    cout << myStringg << "\n";
    return 0;
}