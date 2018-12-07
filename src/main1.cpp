#include "task1.h"
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	char gender;
	float height = 0, weight = 0;
	printf("Введите ваш пол (m - мужской, w - женский) ");
	scanf("%c", &gender);
	printf("Введите свой рост ");
	scanf("%f", &height);
	printf("Введите свой вес ");
	scanf("%f", &weight);
	if ( (gender != 'm' && gender != 'w') || ((height <= 110 || height > 250) || (weight < 1 || weight > 250) ))
	{
		printf("Введены некорректные данные!");
		return 1;
	}
	if (getRecommendation(gender, height, weight) == -1)
		printf("Вес недостаточен.");
	if (getRecommendation(gender, height, weight) == 1)
		printf("Вес избыточен.");
	if (getRecommendation(gender, height, weight) == 0)
		printf("Вес идеален.");
	return  0;
}