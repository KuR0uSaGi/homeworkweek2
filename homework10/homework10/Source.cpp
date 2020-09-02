#include<stdio.h>
int main() {

	int score;

	char grade;

	printf("Input Your Score : ");

	scanf_s("%d", &score);

	if (score >= 80)

		grade = 'A';

	else if (score >= 70)

		grade = 'B';

	else if (score >= 60)

		grade = 'C';

	else if (score >= 50)

		grade = 'D';

	else

		grade = 'F';

	printf("Your Grade = %c ", grade);

}