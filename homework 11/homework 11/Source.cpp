#include <stdio.h>
int main() {

	int num[][3] = {
			   {10 , 200 , 30},
			   {400 , 50 , 600},
			   {70 , 800 , 90},
	};

	int x, y;
	scanf_s("%d %d", &x, &y);
	if (x >= 0 && x < 3 && y >= 0 && y < 3)
		 printf("\n data[%d][%d] = %d", x, y, num[x][y]);
	else printf("error");
	return 0;
}