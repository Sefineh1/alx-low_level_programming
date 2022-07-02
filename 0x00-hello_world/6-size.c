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

	printf("size of a char: %1u byte(s)\n", (unsigned int)sizeof(d));
	printf("size of an int: %1u byte(s)\n", (unsigned int)sizeof(a));
	printf("size of a long int: %1u byte(s)\n", (unsigned int)sizeof(b));
	printf("size of a long long int: %1u byte(s)\n", (unsigned int)sizeof(c));
	printf("size of a float: %1u byte(s)\n", (unsigned int)sizeof(f));
	return (0);

}
