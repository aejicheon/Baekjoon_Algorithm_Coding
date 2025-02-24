#include <iostream>
#include <array>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int arr1[n][m];
    int arr2[n][m];
    int sumarr[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr1[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr2[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            sumarr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << sumarr[i][j] << " ";
        }
        cout<< "\n";
    }
}