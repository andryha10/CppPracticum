#include <iostream>
int main() {
	int fact = 1;
	int n, i;
	std::cin>> n;
	for (i = 1; i <= n; i++) {
		fact *= i;
	}
	std::cout<<"factorial = " << fact;
	fact = 1;

	for (i = n; i >1; i = i-1) {
		fact *= i;
	}
	std::cout << "\nfactorial = " << fact;
	
}
