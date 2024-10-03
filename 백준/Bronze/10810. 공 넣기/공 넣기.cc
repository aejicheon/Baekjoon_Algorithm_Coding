#include <iostream>
using namespace std;

int main() {
    int n, m;
    int i, j, k;
    cin >> n >> m;

    int bask[n]={0};
    for(int ii=0; ii<m; ii++) {
        cin >> i >> j >> k;
        for(int jj = i-1; jj<j; jj++) {
            bask[jj] = k;
        }
    }
    for(int jj=0; jj<n; jj++) {
        cout << bask[jj] << " ";
    }
}