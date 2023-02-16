#include <stdio.h>
#include <unistd.h>

/**
 * main -  entry of this program
 *
 * Return: Return 1
 */
int main(void)
{
	char mS = "and that iece of art is useful\n" -Dora Korpar, 2015-10-19\n";
	write(2, mS, 59);
	return(1);
}
