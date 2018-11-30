#include "task4.h"
#include <stdio.h>

int main()
{
	int feet = 0, inches = 0,sm = 0 ;
	scanf("%d'%d", &feet, &inches);
	if (feet < 0 && inches < 0) 
		return 1;
	sm = convert(feet, inches);
	printf("%d'%d = %d CM.", feet, inches, sm);
	return 0;
}