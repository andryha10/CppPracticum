#include <iostream>
using namespace std;
int main() {
	int n;
	double x = sqrt(2);
	cout << "Enter n: "; cin >> n;
	for (int i = 1; i < n; i++){ 
		x = sqrt(x + 2);
	}
	cout << "Answer = " << x;

}