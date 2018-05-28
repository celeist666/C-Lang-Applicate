#include <stdio.h>

double Round(double num);

int main() {
	double num = -4.5;
	
	printf("%lf\n", num);
	printf("%lf\n", Round(num));
}

double Round(double num) {
	 
	int sign = 0;

	if (num < 0) {
		num *= -1;
		sign = 1;
	}

	double share = (double)((int)num / 1);
	double temp = num - share;
	if (temp >= 0.5) ++share;

	if (sign == 1) {
		share *= -1;
		return share;
	}

	return share;

}