#include <iostream>
#include <vector>
using namespace std;

int main() {
    float sub;
    float max, aver;
    float sum = 0.0;
    cin >> sub;

    vector<float> vec(sub, 0.0);
    
    for(int i=0; i<sub; i++) {
        cin >> vec[i];
    }
    max = vec[0];
    for(int i=0; i<sub; i++) {
        if(max < vec[i]) {
            max = vec[i];
        }
    }
    for(int i=0; i<sub; i++) {
        vec[i] = vec[i]/max *100;
    }
    for(int i=0; i<sub; i++) {
        sum += vec[i];
    }
    aver = sum/sub;
    cout << aver;
}