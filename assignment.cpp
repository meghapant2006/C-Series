# include <iostream>
using namespace std;

int main(){
    int  teabags;

    cout <<"enter number of teabags:";
    cin>> teabags;  

    if(teabags<10){
        // teabags= teabags +5;
        teabags +=5; 
    }
    cout <<"total teabags: " << teabags << endl;
    return 0;

}