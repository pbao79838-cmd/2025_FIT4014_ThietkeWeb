#include <iostream>
using namespace std;

int main(){
    double meal = 88.67;
    double tax = meal * 0.0675;
    double tip = (meal + tax) * 0.2;
    double total = meal + tax + tip;

    cout << "Tien an: " << meal << endl;
    cout << "Thue: " << tax << endl;
    cout << "Tip: " << tip << endl;
    cout << "Tong: " << total;
}

