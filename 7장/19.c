#include <stdio.h>

int main() {
	int i, n;
	double r, result = 1;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &r);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 0; i<n; i++)    result *= r;
	printf("������� %f\n", result);

	return 0;
}