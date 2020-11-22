#include <iostream>
#include <list>
using namespace std;
int main() {
	int Array[4] = { 5, 112, 4, 3 };
	for (int i = 3; i >= 0; i = i - 1) {
		cout << Array[i] << std::endl;
	}
}