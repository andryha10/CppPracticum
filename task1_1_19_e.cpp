#include <iostream>
#include <cmath>
using namespace std;
double isRelu(int a, int x) {
	if (x < 0) { return x / (sqrt(1 + a * x * x)); }
	else { return x; }
}
double deriv(int a, int x) {
	if (isRelu(a, x) == x) { return 1; }
	else { return (sqrt(1 + a * x * x) - ((2 * a * x * x) / sqrt(1 + a * x * x))) / (1 + a * x * x); }
}
int main() {
	int a, x;
	printf("Enter a,x: \n");
	cin >> a >> x;
	cout << "\nDerivative = " << deriv(a, x);

}