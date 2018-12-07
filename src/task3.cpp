#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if (type == 'R')
	{
		angle *= (180 / 3.14159);
		type = 'D';
	}
	else
	{
		angle *= (3.14159 / 180);
		type = 'R';
	}
	sprintf(buf, "%f%c", angle, type);
	return buf;
}