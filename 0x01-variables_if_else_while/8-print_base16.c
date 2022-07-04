#include <stdio.h>
/**
 * main -entry
 *
 * Return: always return 0
 *
 */
int main(void)
{
	unsigned char a = '0';
	int i;

	for (i = 0; i < 6; i++)
{
	putchar(a);
	a++;
}
	a = i;
for (i = 0; i < 6; i++)
{
	putchar('0' + a);
	a++;
}
	putchar('\n');	
	return (0);
}
