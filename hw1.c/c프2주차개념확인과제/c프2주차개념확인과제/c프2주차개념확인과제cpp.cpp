#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result1;
	int result2;
	int result3;
	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);
	result1=(num1 & num2);
	result2 = (num1 | num2);
	result3 = (num1 ^ num2);
	printf("num1&num2= %d \n", result1);
	printf("num1|num2= %d \n", result2);
	printf("num1^num2= %d \n", result3);
}