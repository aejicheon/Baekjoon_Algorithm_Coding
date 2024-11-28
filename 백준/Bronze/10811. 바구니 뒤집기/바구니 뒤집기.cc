#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    int i, j;
    int re, cnt=1;

    cin >> n >> m;
    vector<int> vec(n, 0);
    for(int k=0; k<n; k++) {
        vec[k] = cnt++;
    }
    for(int k=0; k<m; k++) {
        cin >> i >> j;

        for(int l=i-1; l<=j-1; l++) {
            re = vec[l];
            vec[l] = vec[j-1];
            vec[j-1] = re;
            if(j-1 != l) {
                j -= 1;
            }
            
        }
    }
    for(int k=0; k<n; k++) {
        cout << vec[k] << " ";
    }
}