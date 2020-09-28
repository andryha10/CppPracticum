#include <iostream>
using namespace std;
int main() {
	int n; double x;
	cout << "Enter x = ";
	cin >> x;
	cout << " Enter n =";
	cin >> n;
	for (int i = 0; i < n; i++) {
		x = sin(x);
	}
	cout << "x = " << x << endl;
	getchar();
}
