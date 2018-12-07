#include "task3.h"
#include <stdio.h>

int main()
{
	double angle = 0;
	char type, *buf;
	buf = new char[100];
	scanf("%lf%c", &angle, &type);
	if (type != 'R' && type != 'D')
	{
		printf("Uncorrect type!");
		return 1;
	}
	buf = convert(buf, angle, type);
	printf("%s", buf);
	return 0;
}