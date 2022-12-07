#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Input three cities: ");
		printf("Printing the three cities: \n");
		scanf("%d, %d", &arr[1].xpos, arr[i].ypos);
	}
	for (i = 0; i < 3; i++)
		printf("[%d, %d]", arr[i].xpos, arr[i].ypos);

	return 0;
}