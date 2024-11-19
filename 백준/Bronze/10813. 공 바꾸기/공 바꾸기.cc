#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    int i=0, j=0;
    int t=0;

    cin >> n >> m;
    vector<int> vec(n+1, 0);

    for(int a=0; a<n; a++) {
        vec[a] = vec[a+1]+ a*1;
        vec[a] += 1;
    }

    for(int b=0; b<m; b++) {
        i=0, j=0;
        cin >> i >> j;

        t = vec[i-1];
        vec[i-1] = vec[j-1];
        vec[j-1] = t;
    }
    for(int a=0; a<n; a++) {
        cout << vec[a] << " ";
    }
}