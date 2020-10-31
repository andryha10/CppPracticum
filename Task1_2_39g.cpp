#include <iostream>
using namespace std;

int fact(int n) { return (n == 1 || n == 0) ? 1 : fact(n - 1) * n; }

int main() {
	int n;
	float a, a1 = 0, a2 = 1, sum = 2;
	cout << " Enter n :"; cin >> n;
	for(float k = 3; k <= n;k++){
		a = a2 + (a1 / fact(k - 1));
		a1 = a2;
		a2 = a;
		sum += fact(k) * a;
	}
	cout << "Sum = " << sum;
}
