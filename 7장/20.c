#include <stdio.h>

int GetRectWidth(int, int);
int GetRectHeight(int, int);
int GetRectArea(int, int, int, int);
int GetRectPerim(int, int, int, int);

int main() {
	int x1 = 4, x2 = 1, y1 = 5, y2 = 10;
	printf("%d\n\n", GetRectArea(x1, x2, y1, y2));

	printf("%d\n\n", GetRectPerim(x1, x2, y1, y2));
}

int GetRectWidth(int x1, int x2) {
	int width = x1 - x2;
	if (width<0)
	{
		return width * -1;
	}
	return width;
}
int GetRectHeight(int y1, int y2) {
	int height = y1 - y2;
	if (height<0)
	{
		return height * -1;
	}
	return height;
}

int GetRectArea(int x1, int x2, int y1, int y2) {

	int width = GetRectWidth(x1, x2);
	int height = GetRectHeight(y1, y2);
	return width * height;
}

int GetRectPerim(int x1, int x2, int y1, int y2) {
	int width = GetRectWidth(x1, x2);
	int height = GetRectHeight(y1, y2);
	return 2 * (width + height);
}