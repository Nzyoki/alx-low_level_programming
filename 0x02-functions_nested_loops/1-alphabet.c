<<<<<<< HEAD
#include<main.h>
=======
#include "main.h"
>>>>>>> 0526332db606f80999e436c8503c0b93364254df
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
