#include <iostream>
#include <cmath>
using namespace std;
int main1() {
	int a, b, c;
	double x1, x2, D;
	printf("Enter a, b, c:\n");
	cin >> a >> b >> c;

	D = b * b - (4 * a * c);
	cout <<"D: "<< D;
	if (D < 0) { cout << "\nNo solution"; }
	if (D == 0) {
		double x1 = -b/ (2 * a);
		if (x1 > 0) { cout << "\n2 solutiuns :" << sqrt(x1) << ", " << -sqrt(x1); }
		else { cout << "\nNo solutions"; }
	}

	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		if ((x1 > 0) && (x2 > 0))  {cout << "\n4 solutions: " << x1 <<", "<< -x1 <<", "<< x2<<", " << -x2;}
		if ((x1 > 0) && (x2 <= 0)) {cout << "\n2 solutions: " << x1 <<", " << -x1;}
		if ((x1 <= 0) && (x2 > 0)) {cout << "\n2 solutions: " << x2 <<", "<< -x2;}
		if ((x1 < 0) && (x2 < 0)) { cout << "\nNo solutions: "; }
	}
	return 0;

}
