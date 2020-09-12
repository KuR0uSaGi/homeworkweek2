#include<stdio.h>

void checkevenood(int z, int value) {
	if (value % 2 == 0) {
		printf("\n %d is Even", z);
	}
	else {
		printf("\n %d is Odd", z);
	}
}

int main() {
	int a, b, c;
	printf("enter three number :");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= 0 && b >= 0 && c >= 0)
	{
		checkevenood(a, a);
		checkevenood(b, b);
		checkevenood(c, c);
	}
	else printf("put number equal or more than zero");
}