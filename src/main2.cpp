#include "task2.h"
#include <stdio.h>

int main()
{
	int hour = 0, min = 0;
	int result = scanf("%d:%d", &hour, &min);
	if (result != 2)
	{
		printf("Input incorrect data!");
		return 1;
	}
	printf("%s", greet(hour, min));
	return 0;
}