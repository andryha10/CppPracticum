#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
	bool k = true;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			k = false;
			break;
		}
	}
	return k;
}

int main() {
	int n, cnt =0,  i = 2;
	cin >> n;
	for (i; i < n; i++) {
		if (isPrime(i) == true) { 
		cnt += 1;
		std::cout<<"\n" << i; }
		}
	std::cout << "\nThe number of prime numbers is:  " << cnt;

}
	
	
