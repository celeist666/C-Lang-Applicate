#include <stdio.h>

int IsPrime(int num);

int main() {
	int i;
	for (i = 1; i <= 100; i++) {
		if (IsPrime(i))
		{
			printf("%d\n", i);
		}
	}
}

int IsPrime(int num) {
	int i=2;
	if (num == 2) return 1;

	for (; i*i <= num; i++) {
		if (num % i==0){
			return 0;
		}
	}
	return 1;
}