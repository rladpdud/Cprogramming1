#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 4; j >i; j--) {
			printf("");
		}
		for (j = 0; j <=i*2; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}