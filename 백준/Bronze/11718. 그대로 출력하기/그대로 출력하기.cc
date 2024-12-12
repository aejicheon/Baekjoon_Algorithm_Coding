#include <iostream>
#include <string>
using namespace std;

int main() {
    string std;

    while(true) {
        getline(cin, std);
        if(std == "") break;

        cout << std << "\n";
    }
}