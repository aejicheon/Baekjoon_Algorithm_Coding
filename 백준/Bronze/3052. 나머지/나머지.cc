#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num(10,0);
    vector<int> check(10,0);
    int cnt =0;
    
    for(int i=0; i<10; i++) {
        cin >> num[i];
    }
    for(int i=0; i<10; i++) {
        num[i] %= 42;
    }
    for(int i=0; i<10; i++) {
        for(int j=i+1; j<10; j++) {
            if(num[i] == num[j]) {
                num[j] = -1;
            }
        }
    }
    for(int i=0; i<10; i++) {
        if(num[i] >= 0) {
            cnt++;
        }
    }
    cout << cnt;
}