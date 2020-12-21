#include <iostream>
#define N 10
using namespace std;
int main() {
	int n, m, k;
	int x, a[N][N], b[N][N], ab[N][N];
	cout << "Enter n, m, k:\n"; cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Enter a[" << i << "][" << j << "]=";
			cin >> x;
			a[i][j] = x;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cout << "Enter b[" << i << "][" << j << "]=";
			cin >> x;
			b[i][j] = x;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			ab[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int i2 = 0; i2 < m; i2++) {
				ab[i][j] += a[i][i2] * b[i2][j];

			}
		}
	}
	cout << endl << "Output Matrix: " << endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < k; ++j) {
			cout << " " << ab[i][j];
			if (j == k - 1) {
				cout << endl;
			}
		}
	}
	return 0;
}
