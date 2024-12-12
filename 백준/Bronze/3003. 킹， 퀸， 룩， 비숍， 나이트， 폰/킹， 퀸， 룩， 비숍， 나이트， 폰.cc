#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int>per = {1, 1, 2, 2, 2, 8};
    vector <int>vec(6, 0);

    for(int i=0; i<6; i++) {
        cin >> vec[i];
    }
    for(int i=0; i<6; i++) {
        if(per[i] != vec[i]) {
            vec[i] = per[i] - vec[i];
        }
        else {
            vec[i] = 0;
        }
    }
    for(int i=0; i<6; i++) {
        cout << vec[i] << " ";
    }
}