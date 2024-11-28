#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a;
    
    cin >> a;
    vector<string> str(a);

    for(int i=0; i<a; i++) {
        cin >> str[i];
    }
    for(int i=0; i<a; i++) {
        cout << str[i].front() << str[i].back() << "\n";
    }
}