#include <iostream>
#define Size 5
using namespace std;
int main() {
	int x, cnt = 0, a[Size];
	double p;
	printf("Enter the  real number: ");
	cin >> p;
	for (int i = 0; i < Size; i++) {
		printf("arr[%d] = ", i);
		cin >> x;
		a[i] = x;
		if (x < p) { cnt += 1; }
	}
	cout << "\nCnt = " << cnt;
}
