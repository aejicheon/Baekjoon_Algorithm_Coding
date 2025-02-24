#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    char ret = '?';
    int alpha[26] = {0};
    int max=0;

    getline(cin, str);

    for(char c : str) {
        c = toupper(c);
        alpha[c-'A']++;
    }

    for(int i=0; i<26; i++) {
        if(alpha[i] >max) {
            max = alpha[i];
            ret = 'A' + i;
        }
        else if(alpha[i] == max) {
            ret = '?';
        }
    }
    cout << ret;
}

