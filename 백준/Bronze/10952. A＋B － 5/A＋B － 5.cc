#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	while (true) {
		cin >> a >> b;
		c = a + b;

		if (a == 0 && b == 0) {
			break;
		}

		cout << c << endl;
	}
}