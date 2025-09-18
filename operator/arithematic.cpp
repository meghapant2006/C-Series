# include <iostream>
using namespace std;

int main(){
    int cups;
    double price_per_cup, total_price, discount;

    cout <<"enter number of cups:";
    cin >> cups; 
    
    cout <<"enter price per cup:";
    cin >> price_per_cup;

    total_price = cups * price_per_cup;
    
    //apply 5% discount for orders over 100

    if (total_price>100){
        discount= total_price - (total_price *0.05);
        cout <<"total price after discount: " << discount << endl;
    } else{
        cout <<"total price is : " << total_price << endl;
    }
    
    return 0;
}