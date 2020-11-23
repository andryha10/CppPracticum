#include <iostream>
using namespace std;

int main3() {
	int a1 = 0, a2 = 1,t = 4, sum = a1 + 2*a2, sn, ak, n;
	std::cin >> n;
	for (int k = 3; k <= n; k++) {
		ak = a2 + k * a1;
		a1 = ak;
		t *= 2;
		sum += t * ak;
	}
	std::cout << "sum= " << sum;
	return 0;
	
}