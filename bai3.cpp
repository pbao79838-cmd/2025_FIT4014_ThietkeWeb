#include <iostream>
using namespace std;

int main(){
    double price = 95;
    double stateTax = price * 0.04;
    double countyTax = price * 0.02;
    double totalTax = stateTax + countyTax;
    cout << "Tong thue = " << totalTax;
}

