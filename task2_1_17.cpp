#include <iostream>
using namespace std;
int main() {
	int x,  max = 1, min = -1, i = 0, j = 0;
	do{
		cout << "Enter the real number: ";
		cin >> x;
		if (i == 0 && x < 0) { max = x; i = 1; }
		if (j == 0 && x > 0) { min = x; j = 1; }
		if (x < 0 && x > max) { max = x; }
		if (x > 0 && x < min) { min = x; }
	} while (x != 0);
	if (max != 1){cout << "\nMax negative = " << max;}
	else if(max == 1 && min != -1) { cout << "\nMin positive = " << min; }
	else {cout << "\nNo numbers except 0";}

}