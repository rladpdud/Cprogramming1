#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�̰� ���������ε� �迭�� �� �ٲٰڴ�.. 
//���ͳ� ���۸��ߴ��� �װ� C++�ΰ� ��ư ���� �� �´´ٰ� ���� �׳� �̰� �����ϰ� �ƴ�. �̤�

int convCase(int ch)
{
	// ��� ������ ��ҹ��ڰ� ���� ũ��� ����.
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void)
{
	int ch;
	printf("���� �Է�: ");
	ch = getchar(); // ���� �Է�
	ch = convCase(ch); // ���� ��ȯ
	if (ch == -1)
	{
		puts("������ ��� �Է��Դϴ�.");
		return -1;
	}
	putchar(ch); // ��ȯ�� ���� ���
	return 0;
}
