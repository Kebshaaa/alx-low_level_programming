#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets lowercas'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putcher(n);
		n++;
	}
	putchar('\n');
	return (0);
}
