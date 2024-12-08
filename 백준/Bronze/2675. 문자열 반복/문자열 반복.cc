#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int ca, a;
    string str, nstr;

    cin >> ca;
    vector <string>vec(ca, "0");

    for(int i=0; i<ca; i++) {
        cin >> a >> str;
        nstr = "";
        for(int j=0; j<str.length(); j++) {
            for(int k=0; k<a; k++) {
                nstr += str[j];
            }
        }
        vec[i] = nstr;
    }

    for(int i=0; i<ca; i++){
        cout << vec[i] << "\n";
    }
}