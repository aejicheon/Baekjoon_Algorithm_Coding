#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> stuNum = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    vector<int> getstu(28, 0);

    for(int i=0; i<28; i++) {
        cin >> getstu[i];
    }
    for(int i=0; i<30; i++) {
        for(int j=0; j<28; j++) {
            if(stuNum[i] == getstu[j]) {
                stuNum[i] = 0;
            }
        }
    }
    for(int i=0; i<30; i++) {
        if(stuNum[i] != 0) {
            cout << stuNum[i] << "\n";
        }
    }
}