#include <stdio.h>

int main() {
	int i;
	int getNum;
	int sum = 0;

	for (i = 1; i < 11; ++i)
	{
		printf("Geef een getal: \n");
		scanf_s("%i", &getNum);
		sum += getNum;
	}
	printf("Het gemiddelde is: %d", sum / 10);

	return 0;
}