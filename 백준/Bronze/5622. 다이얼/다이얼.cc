#include <iostream>
#include <string>
using namespace std;

int main() {
    string std;
    int a=0, sum=0;

    getline(cin, std);

    for(int i=0; i<std.length(); i++) {
        a = std[i]-63;
        if(a < 5) { sum += 3; }
        else if(a < 8) { sum += 4; }
        else if(a < 11) { sum += 5; }
        else if(a< 14) { sum += 6; }
        else if(a< 17) { sum += 7; }
        else if(a< 21) { sum += 8; }
        else if(a< 24) { sum += 9; }
        else if(a< 28) { sum += 10; }
        else if(std[i] = 48) { sum += 11; }
        else { sum += 2; }
    }
 
    cout << sum;
}