#include <iostream>
using namespace std;
int main()
{
    float marks = 95.5;
    int class_student = (int)marks;

    int quantity = 10;
    double price = marks * quantity;



    cout << "class student marks: " << class_student << endl;
    cout << "Total price: " << price << endl;
    return 0;
}