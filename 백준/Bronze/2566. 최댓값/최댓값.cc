#include<iostream>
#include <array>
using namespace std;

int main() {
    int arr[9][9];

    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int a=0, b=0;

    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            if(max < arr[i][j]) {
                max = arr[i][j];
                a=i;
                b=j;
            }
        }
    }

    cout << max << endl;
    cout << a+1 << " " << b+1;
}