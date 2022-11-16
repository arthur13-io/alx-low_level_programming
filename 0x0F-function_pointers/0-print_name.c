#include <stdio.h>
#include "function_pointers.h"
/**
 * main- function pointer that prints a name
 * Return: success 0
 */
void print_name(char *name)
{
	printf("%s\n", name);
}
int main(void)
{
	void (*pointer)(char *);

	pointer = &print_name;
	pointer("David");
	return (0);
}
