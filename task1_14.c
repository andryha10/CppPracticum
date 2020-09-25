#include <stdio.h>

double func(int n) {
	if (n % 2 == 0) {
		return 1;
	}
	if (n % 2 == 1) {
		return 1;
	}
}
int main(){
	int x;
	scanf_s("%d", &x);
	int b = func(x);
	printf("Answer = %i", b);


}