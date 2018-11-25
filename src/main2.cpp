#include "task2.h"
#include <stdio.h>

int main()
{
	int hour=0, min=0;
	scanf("%d:%d", &hour, &min);
	printf("%s", greet(hour, min));
	return 0;

}