#include "task2.h"
#include <stdio.h>

int main()
{
	int hour=0, min=0, sec=0;
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf("%s", greet(hour, min));
	return 0;

}