#include <iostream>
using namespace std;
#define N 20

double Min(double a[N], int n) {
	double Xmin = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < Xmin) { Xmin = a[i]; }
		if (i == 0) { Xmin = a[0]; }
	}
	return Xmin;
}
int main() {
	double a[N];
	int n;
	double Xk;
	cout << "Input n:"; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Input a[" << i << "]=";
		cin >> Xk;
		a[i] = Xk;
	}
	cout << "Min = " << Min(a, n);
}
