#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[2];
    int max;

    cin >> str[0] >> str[1];
    for(int i=0; i<2; i++) {
        char s1 = str[i].front();
        str[i].front() = str[i].back();
        str[i].back() = s1;
    }

    if(stoi(str[0]) > stoi(str[1])) {
        max = stoi(str[0]);
    }
    else if(stoi(str[0]) == stoi(str[1])) {
        max = stoi(str[0]);
    }
    else {
        max = stoi(str[1]);
    }
    cout << max;
}