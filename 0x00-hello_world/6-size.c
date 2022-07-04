#include <stdio.h>
/**
 * main-  Entry point
 * Return: the size of different types of variable
 */
int main(void)

{

	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %1u byte(s)\n", (unsigned int)sizeof(d));
	printf("Size of an int: %1u byte(s)\n", (unsigned int)sizeof(a));
	printf("Size of a long int: %1u byte(s)\n", (unsigned int)sizeof(b));
	printf("Size of a long long int: %1u byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of a float: %1u byte(s)\n", (unsigned int)sizeof(f));
	return (0);

}
