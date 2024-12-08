#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str;
    vector <int>vec(26,-1);

    getline(cin, str);

    for(int i=0; i<str.length(); i++) {
        int a = int(str[i]) - 97;
        if(vec[a] == -1) {
            vec[a] = i;
        }
    }
    for(int i=0; i<26; i++) {
        cout << vec[i] << " ";
    }
}