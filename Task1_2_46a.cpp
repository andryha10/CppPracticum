#include <iostream>
using namespace std;

int fact(int n) { return (n == 1 || n == 0) ? 1 : fact(n - 1) * n; }

int main() {
	int k = 0;
	float eps, x,sum = 0, Xk = 1;
	do {
		cout << "Enter x !=0 and eps>0 :\n";
		cin >> x >> eps;
	} while (x == 0 || eps <= 0);
	while(Xk > eps) {
		Xk = pow(x, 2 * k) / (2 * fact(k));
		sum += Xk;
		k++;
	}
	
	cout << "Sum = " << sum << "\nThe number of terms:" << k;
}
