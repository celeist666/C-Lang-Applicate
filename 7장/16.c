#include <stdio.h>

int isLeapYear(int year);
int GetDaysOfMonth(int year, int month);

int main() {
	int year = 104;
	int month = 2;
	
	printf("%d\n", GetDaysOfMonth(year, month));
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

int GetDaysOfMonth(int year, int month) {
	switch (month)
	{
		case 1: return 31;
		case 2: if (isLeapYear(year)) return 29;
				return 28;
		case 3: return 31;
		case 4: return 30;
		case 5: return 31;
		case 6: return 30;
		case 7: return 31;
		case 8: return 31;
		case 9: return 30;
		case 10: return 31;
		case 11: return 30;
		case 12: return 31;

	}
}