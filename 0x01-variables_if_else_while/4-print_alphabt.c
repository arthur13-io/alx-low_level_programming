#include <stdio.h>
/**
 * main-program entry point
 *
 * Return:0 if no error, non zero if error
 */
	int main(void)
{
	char character;

	for(character = 'a'; character <= 'z'; character++)
	{
		if (character == 'e' || character == 'q')
			putchar(character);
	}
	putchar('\n');
	return (0);
}

