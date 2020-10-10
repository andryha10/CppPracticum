#include <iostream>
#include <cmath>
double func(double x) {
	double Xk = -(x * x);
	
	return exp(Xk);
}
double func_derivative(double x) {
	double deriv = func(x) * (-2 * x);
	
	return deriv;
}
int main() {
	double x;
	std::cin >> x;
	std::cout << "f(x) = " << func(x) <<"\ng(x) = " << func_derivative(x);

}