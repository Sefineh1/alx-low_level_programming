#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main: function will assign a random number n each time* it is exceuted, it prints a postive negative of the numb*er stored in n */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n>0)
	printf("%d is positive\n", n);
	if else (n==0)
	printf("%d is zero\n", n);
	else (n<0)
{
	printf("%d is negative\n", n);
	return (0);
}
}
