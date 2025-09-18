#include <iostream>

using namespace std;

class student
{
public:
int add(int a,int b); 
void priya()
{
   string name;
    cout<<"\n enter your name"<<endl;
    cin>>name;
    cout<<name<<endl;

}
void cal()
{
double num1, num2;
    char op;
    cout << "Enter first no: ";
    cin >> num1;
    cout << "Enter the operator(+, -, *, /): " <<endl;
    cin >> op;   
    cout << "Enter Second no: ";
    cin >> num2;
    switch (op)
    {
    case '+':
        cout << "Result = " << num1 + num2 << endl;
        break;

     case '-':
        cout << "Result = " << num1 - num2 << endl;
        break;   
        
     case '*':
        cout << "Result = " << num1 * num2 << endl;
        break;    

     case '/':
        cout << "Result = " << num1 / num2 << endl;
        break;
     default:
        cout << "Invalid operator!" << endl;
        break;
    }
}
int student::add(int a,int b)
{
   return a+b ;
}

};
int main()
{
    student ob,my;
    int val;
    //ob.cal();
    //ob.priya();
   // my.priya();
    val=ob.add(111,100);
    cout<<"addition is="<<val<<endl;
    val=my.add(10,20);
    cout<<"\naddition is="<<val;
    return 0;
}