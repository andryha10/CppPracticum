#include <iostream>
int main() {
	int fact = 1, i, n;
	std::cin >> n;
	if (n % 2 == 0) {
		for (i = 2; i <= n; i = i + 2) {
			fact *= i;
		}
	}
	else {
		for (i = 1; i <= n; i = i + 2) {
			fact *= i;
		}
	}
	std::cout << "factorial = " << fact;
	
}