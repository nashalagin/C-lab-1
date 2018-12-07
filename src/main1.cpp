#include "task1.h"
#include <stdio.h>

int main()
{
	char gender;
	float height = 0, weight = 0;
	printf("Enter your gender (m - man, w - woman) ");
	int result = scanf("%c", &gender);
	printf("Enter your height ");
	result += scanf("%f", &height);
	printf("Enter your weight ");
	result += scanf("%f", &weight);
	if ((result != 3) || (gender != 'm' && gender != 'w') || ((height < 10 || height > 250) || (weight < 1 || weight > 250) ))
	{
		printf("Uncorrect data!");
		return 1;
	}
	if (getRecommendation(gender, height, weight) == -1)
		printf("You need to get fat.");
	if (getRecommendation(gender, height, weight) == 1)
		printf("You need to lose weight.");
	if (getRecommendation(gender, height, weight) == 0)
		printf("Your weight is perfect!");
	return  0;
}