#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main: a function that print a text
 *
 * return: succes
 *
 */

int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quot, strlen(quot));

	return (1);
}
