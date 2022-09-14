#include "main.h"
/**
*main - Prints _putchar as a message.
*Return: Always 0 (Success)
**/
int main(void)
{
	int i = 0;
	char word[8] = "_putchar";

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
