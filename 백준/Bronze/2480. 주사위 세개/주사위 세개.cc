#include <iostream>
using namespace std;

int main() {
    int a,b, c, max, money;

    cin >> a >> b >> c;
    if(a==b) {
        if(a==c) {
            money = 10000 + a * 1000;
        }
        else{
            money = 1000 + a * 100;
        }
    }
    else if(a==c || b==c){
        money = 1000 + c * 100;
    }
    else {
        max = a;
        if(max<b) {
            max = b;
        }
        if(max < c) {
            max = c;
        }
        money = max * 100;
    }
    cout << money;
}