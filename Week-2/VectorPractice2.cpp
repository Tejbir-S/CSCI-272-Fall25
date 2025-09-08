#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> cart = {30, 25, 67};
    cart.push_back(20);
    cart.push_back(15);
    cart.insert(cart.begin(), 70);
    cout<<"First items price is $"<<cart.front()<<endl;
    cout<<"Last items price is $"<<cart.back()<<endl;
    cout<<"Total number of items in the cart are "<<cart.size()<<endl;
    double total = 0;
    for(int i = 0; i < cart.size(); i++){
        total += cart[i];
    }
    cout<<"Total price of items in the cart is $"<<total<<endl;
    return 0;
}