#include <iostream>
using namespace std;
int main() {
	int n, k = 1;
	double x,Xk = 1, Sum = 1;
	do {cout << " Enter  0 < x < 1, n >= 0 :\n"; cin >> x >> n;}
	while (( x >= 1) || ( n < 0));
	for (int i = 1; i <= n; i++) {
		Xk *= x / i;
		Sum += Xk;
	}
	cout << "f(x) =  " << Sum;

}