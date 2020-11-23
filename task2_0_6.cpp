#include <iostream>
using namespace std;
int main() {
	int elem, i = 0, sum = 0;
	do {
		printf("arr[%d] = ", i);
		cin >> elem;
		sum += elem;
		i++;
	} while (elem != 0);
	cout << "Sum = " << sum;

}