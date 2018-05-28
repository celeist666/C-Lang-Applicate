#include <stdio.h>

double Absolute(double num);

int main() {
	double num = -1.3;
	
	printf("%lf\n", num);
	printf("%lf\n", Absolute(num));
}

double Absolute(double num) {

	if (num >= 0) return num;
	return num *= -1;

}