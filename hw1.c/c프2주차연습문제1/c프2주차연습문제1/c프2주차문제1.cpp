#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);
	num = ~num;
	num = num + 1;
	printf("��ȣ�� �ٲ� ���: %d \n", num);
	return 0;
}