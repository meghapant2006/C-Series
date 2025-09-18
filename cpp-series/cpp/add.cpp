#include <iostream>

using namespace std;

class student
{
public:
int add(int a,int b); 
};

int student :: add(int a, int b)
{
    return a + b ;
}

int main ()
{
    student ob;
    int valu ;
    valu = ob.add(10, 20);
    cout<<valu<<endl;
    return 0;
}