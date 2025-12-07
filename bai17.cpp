#include <iostream>
using namespace std;

int main(){
    double shares = 750 * 35.00;
    double commission = shares * 0.02;
    double total = shares + commission;

    cout << "Thanh toan co phieu: " << shares << endl;
    cout << "Hoa hong: " << commission << endl;
    cout << "Tong thanh toan: " << total;
}

