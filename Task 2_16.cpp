#include <iostream>
#define N 20
using namespace std;

int cnt(int a[N], int n, int elem) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == elem) { k += 1; }

	}
	return k;
}
double in_array(int a2[N], int n, int Xk) {
	for (int i = 0; i < n; ++i) {
		if (a2[i] == Xk) {
			return i;
		}
	}
	return 0.1;
}


int main() {
	int a[N], a2[N];
	int n, Xk;
	cout << "Input n:"; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Input a[" << i << "]=";
		cin >> Xk;
		a[i] = Xk;
	}
	int Xmax = 0;
	for (int i = 0; i < n; i++) {
		if (cnt(a, n, a[i]) > Xmax) { Xmax = cnt(a, n , a[i]); }
		if (i == 0) { Xmax = cnt(a, n, a[0]); }
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (cnt(a, n, a[i]) == Xmax && in_array(a2, n, a[i]) == 0.1) {
			a2[k] = a[i]; ++k;
		}
	}
	cout << "Most frequent elements:";
	for (int i = 0; i < k; i++) {
		cout <<"\n" << a2[i];
	}
}
