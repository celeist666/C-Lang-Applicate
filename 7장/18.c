#include <stdio.h>

int IsLower(char ch);
int IsUpper(char ch);

int main() {
	char ch = '*';
	printf("%d\n\n", IsAlphabetic(ch));
}

int IsLower(char ch) {
	if ((ch >= 'a') && (ch <= 'z'))	return 1;
	return 0;
}

int IsUpper(char ch) {
	if ((ch >= 'A') && (ch <= 'Z'))	return 1;
	return 0;
}

int IsAlphabetic(char ch) {
	if (IsLower(ch) || IsUpper(ch)) return 1;
	return 0;
}