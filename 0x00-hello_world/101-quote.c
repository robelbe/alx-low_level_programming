#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main- entry point
 * Description: 'for a function that print a text'
 *
 * return: Always 1 (succes)
 *
 */

int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quot, strlen(quot));

	return (1);
}
