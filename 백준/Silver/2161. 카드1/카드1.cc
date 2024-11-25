#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	queue<int> q;
	cin >> N;

	for (int i = 1; i <= N; ++i) {
		q.push(i);
	}

	for (int i = 0; i < N - 1; ++i) {
		cout << q.front() << " ";
		q.pop();
		
		int temp = q.front();
		q.pop();
		q.push(temp);
	}

	cout << q.front();

    return 0;
}