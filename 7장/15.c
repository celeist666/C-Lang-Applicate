#include <stdio.h>

int isLeapYear(int year);

int main() {
	int year = 104;
	
	printf("%d\n", isLeapYear(year));
}

int isLeapYear(int year) {
	if (year % 4 == 0) {

		if (year%400 ==0)
		{
			return 1;
		}
		if (!(year % 100 == 0))
		{
			return 1;
		}

	 }
	return 0;

}