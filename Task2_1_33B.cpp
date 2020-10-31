#include <iostream>
using namespace std;
int main2() {
	int sum= 2 , k = 0, k0 =1, k1 = 1; 
	while(k < 1000){
		k = k0 + k1;
		k0 = k1;
		k1 = k;
		sum += k;
		cout <<'\n' <<  k;
	}
	cout << "\nSum = " << sum;
	return 0;
}