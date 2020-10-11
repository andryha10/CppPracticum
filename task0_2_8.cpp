#include <iostream>
#include <cmath>
int main2() {
	double x0, y0;
	printf("Enter x0,y0:\n");
	std::cin >> x0 >> y0;
	//a)
	double x, y, dist;
	printf("Enter x,y:\n");
	std::cin >> x >> y;
	dist = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
	std::cout << "Distance is :" << dist;
	//b)
	double a, b, c, norm;
	printf("\nEnter a,b,c:\n");
	std::cin >> a >> b >> c;
	norm = -1 / (sqrt(a * a + b * b)); // Нормуючий множник
	double answ = fabs(norm * (a * x0 + b * y0 + c));
	std::cout << "Distance is :" << answ;
	//c)
	double A, B, C1,C2;
	printf("\nEnter a,b,c1,c2:\n");
	do { std::cin >> A >> B >> C1 >> C2; } while (A* B == 1);
	double y1 = (A * (-C1) + C2) / (A * B);
	double x1 = (-B * y1 - C1);
	double dist2 = sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));
	std::cout << "Distance is: " << dist2;
	return 0;

}