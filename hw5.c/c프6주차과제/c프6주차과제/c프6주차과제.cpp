#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void To2(int n);

int main()
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	To2(num);
	printf("\n");
	return 0;
}

void To2(int n)
{
	int r;
	r = n % 2;
	if (n >= 2) { To2(n / 2); }
	printf("%d", r);
	return;
}