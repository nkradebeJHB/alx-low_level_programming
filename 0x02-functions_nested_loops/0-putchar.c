#include "main.h"

/**
 * main - prints the string "_putchar".
 *
 * Return: 0 if success.
 */
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0 ; i < 8; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
