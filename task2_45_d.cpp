#include <iostream>
#include <cmath>
int main() {
	double x, eps;
	double t, y;
	int i;
	std::cin >> x;
	do {
		std::cin >> eps;
	} while (eps <= 0);
	t = 1; // x^i/i!
	i = 0, y = 1;
	while (fabs(t > eps)) {
		i++;
		t *= x / i;
		y += t;
	}
	std::cout << "y = " << y;
	std::cout << "\nexp(x) = " << exp(x);
	
}