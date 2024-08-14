#include <iostream>
using namespace std;

int main() {
    int totalprice, get;
    int price, g, sum=0;;

    cin >> totalprice;
    cin >> get;

    for(int i=0; i<get; i++) {
        price = 0; g = 0;
        cin >> price >> g;

        sum += price * g;
    }
    if(totalprice == sum) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}