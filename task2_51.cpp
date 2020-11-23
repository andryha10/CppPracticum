#include <iostream>
#include <cmath>
double half_cut(double a, double b , double eps) {
	if (b - a < eps) return (a + b) / 2;
	double z = (a + b) / 2;
	if (tan(z) - z < 0) return half_cut(z, b,eps);
	else return half_cut(a, z,eps);
}

int main() {
	double a = 0.001, b = 1.5;
	double x, y, eps;
	do {
		printf("Input real eps>0:");
			std::cin >> eps;
	} while (eps <= 0);
	x = half_cut(a, b, eps);
	std::cout << "x = " << x;
	
}