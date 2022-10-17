#include <stdio.h>
/**
 * main program entry point
 *
 * Return 0: no error, non zero if any
 */
	int main(void)
{
	char character;

	for(character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
		if (character == 'e' || character == 'q')
		{
			break;
		}
		else continue;
	}
	putchar('\n');
	return (0);
}

