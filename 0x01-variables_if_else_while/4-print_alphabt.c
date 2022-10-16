#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line, expect q and e
 * Return: (0)
 */
int main(void)
{
	char lat;

	for (lat = 'a'; lat <= 'z'; lat++)
	{
		if (lat != 'e' && lat != 'q')
			putchar(lat);
	}
	putchar('\n');

	return (0);
}

