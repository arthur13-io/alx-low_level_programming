#include <stdio.h>
/**
 * main-program entry point
 *
 * Return:0 if no error, non zero if error
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number);
		putchar('\n');
	}
	return (0);
}
