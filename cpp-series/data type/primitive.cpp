# include <iostream>
using namespace std;

int main(){

    int  class_student = 58;
    float marks = 5.5;  
    double  percentage = 92.99;
    char grade = 'A';
    bool isPassed = true ;
    void *ptr = nullptr;

    // Output the values of the variables............................

    cout << class_student << endl;
    cout <<marks << endl;
    cout << percentage << endl;
    cout << grade << endl;
    cout << isPassed << endl;
    cout << ptr << endl;

//     // Output the values with descriptive text
    cout << "Number of students in class: " << class_student << endl;
    cout << "Marks obtained: " << marks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << (isPassed ? "Yes" : "No") << endl;
    cout << "Pointer address: " << ptr << endl;

    // Output the size of each variable type
    cout << "Size of int: " << sizeof(class_student) << " bytes" << endl;
    cout << "Size of float: " << sizeof(marks) << " bytes" << endl;
    cout << "Size of double: " << sizeof(percentage) << " bytes" << endl;
    cout << "Size of char: " << sizeof(grade) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(isPassed) << " bytes" << endl;
    cout << "Size of void pointer: " << sizeof(ptr) << " bytes" << endl;
    
    
    return 0;
 }