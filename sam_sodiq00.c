#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates the sum of fruits in a backet,
 * which are oranges, bananas and apples.
 * Return: (0) Always
 */

int main(void)
{
	int oranges = 12;
	int bananas = 9;
	int apples = 19;

	int total_fruits = oranges + bananas + apples;

	printf("The total fruits in the basket are:%d\n", total_fruits);
	return (0);
}
