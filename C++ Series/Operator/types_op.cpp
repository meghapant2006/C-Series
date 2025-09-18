#include <iostream>
using namespace std;
int main()
{

    // 1. Assignmenrt Operators...
    int x = 10;
    x += 5;            // x = x + 5
    cout << x << "\n"; // 15

    // 2. Comparison Operators...
    int a = 10;
    int b = 5;
    cout << (a > b) << "\n";   // 1 (true)

    // 3. Logical Operators...
    int p = 10;
    int q = 5;
    cout << (p > 5 && q < 10) << "\n"; // 1 (true)
    cout << (p > 5 || q > 10) << "\n"; // 1 (true)
    cout << !(p < 5) << "\n";         // 1 (true)
}