#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum=0;
    string str;

    cin>> n;
    cin.ignore();
    getline(cin, str);

    for(int i=0; i<n; i++) {
        string a;
        a = str[i];
        sum += stoi(a);
    }
    cout << sum;
}