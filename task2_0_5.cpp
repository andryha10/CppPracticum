#include <iostream>
# include <stdio.h>
#define Size 5
using namespace std;
int main() {
	int x, sum1 = 0,sum2 = 0;
	int a[Size];
	for (int i = 0; i < Size; i++) {
		printf("arr[%d] = ", i);
		cin >> x;
		if (x % 2 == 0) { sum1 += x; }
		else { sum2 += x; }
		a[i] = x;
	}
	cout << "Pair sum = " << sum1 << "\nNot pair sum = " << sum2;
	
}