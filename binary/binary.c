#include <stdio.h>

/**
 * Create a program that converst a decimal number to
 * binary number
 */

int main(void)
{
	int binary[32];
	int i = 0;
	int j;
	int num;

	printf("Enter a value: ");
	scanf("%d", &num);

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);

	}
	printf("\n");
	return (0);
}
