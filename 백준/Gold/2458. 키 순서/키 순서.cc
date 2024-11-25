#include <iostream>
#include <algorithm>

using namespace std;

int N, M, rst = 0;
int INF = 987654321;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin >> N >> M;

	int arr[N + 1][N + 1];

	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j) {
			if (i != j) {
				arr[i][j] = INF;
			} else {
				arr[i][j] = 0;
			}
		}	
	}

	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
	
		arr[a][b] = 1;
	}

	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j) {
			for (int k = 1; k <= N; ++k) {
				if (arr[j][k] > arr[j][i] + arr[i][k]) {
					arr[j][k] = arr[j][i] + arr[i][k];
				}
			}
		}
	}

	for (int i = 1; i <= N; ++i) {
		int cnt = 0;

		for (int j = 1; j <= N; ++j) {
			if (arr[i][j] != INF && arr[i][j] != 0) {
				++cnt;
			}
		}

		for (int j = 1; j <= N; ++j) {
			if (arr[j][i] != INF && arr[i][j] != 0) {
				++cnt;
			}
		}

		if (cnt == N - 1) {
			++rst;
		}
	}

	cout << rst;

    return 0;
}