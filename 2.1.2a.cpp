#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
	int n ; double x,y,t ;
	y = 0;
	t = 1;
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter n = ";
	cin >> n;
	
	
	for (int i = 1; i <= n ; i++) {
		t *= x;
		y += t;
		
		
	}
	cout << "y= " << y <<endl;
	
	getchar();
}