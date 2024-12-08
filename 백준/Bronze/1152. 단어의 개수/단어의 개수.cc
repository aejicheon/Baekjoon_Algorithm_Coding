#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int cnt =0;

    getline(cin, str);

    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            ++cnt;
        }
    }
    if(str[0] == ' ') {
        cnt--;
    }
    if(str.back() == ' ') {
        cnt--;
    }

    cout << cnt+1;

}