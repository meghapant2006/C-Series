#include <iostream>
using namespace std;
int main()
{
    int sum1 = 100 + 50;     //150
    int sum2 = sum1 + 250;    //400
    int sum3 = sum2 + sum2;   //800

    cout << sum1 << "\n";
    cout << sum2 << "\n";
    cout << sum3 << "\n";
    return 0;
}