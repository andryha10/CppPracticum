#include <iostream>
# include <stdio.h>
#define Size 5
using namespace std;

int main() {
	int x, Max;
	int a[Size];
	for (int i = 0; i < Size; i++) {
		printf("arr[%d] = ", i);
		cin >> x;
		a[i] = x;
	}
	 Max = a[0];
	for (int i = 0; i < Size; i++) {
		if (Max < a[i]) {
			Max = a[i]; }
	}
	cout << "Max:" << Max;
}
