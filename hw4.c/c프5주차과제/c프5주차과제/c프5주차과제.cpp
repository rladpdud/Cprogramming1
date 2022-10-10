#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, count=0;
	printf("Please enter a number:");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0) count++;
	}
	
	if (count == 1) printf("It is a prime number.");
	else printf("It is not a prime number.");
	return 0;
}