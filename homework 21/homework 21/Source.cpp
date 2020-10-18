#include<stdio.h>

void checkevenorood(int z, int value) {
	if (value % 2 == 0) {
		printf("\n %d is Even", z);
	}
	else {
		printf("\n %d is Odd", z);
	}
}

int main() {
	int a, b, c, d, e, temp;
	printf("enter three number :");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a >= 0 && b >= 0 && c >= 0 && d>=0 && e>=0)
	{
		checkevenorood(a, a);
		checkevenorood(b, b);
		checkevenorood(c, c);
		checkevenorood(d, d);
		checkevenorood(e, e);
	}
	else printf("put number equal or more than zero");
}