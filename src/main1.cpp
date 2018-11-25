#include "task1.h"


int main()
{
	setlocale(LC_ALL, "");
	char gender;
	float height=0, weight=0;
	int z=0;
	printf("Введите ваш пол (m - мужской, w - женский) ");//cout << "Введите ваш пол (m - мужской, w - женский) ";
	scanf("%c", &gender);								//cin >> gender;
	printf("Введите свой рост ");						//cout << "Введите свой рост ";
	scanf("%f", &height);								// cin >> height;
	printf("Введите свой вес ");						//cout << "Введите свой вес ";
	scanf("%f", &weight);								//cin >> weight;
		if ((gender != 'm' && gender != 'w')||( height <= 110 && height > 250) ||( weight < 0 && weight > 250))
		{
			printf( "Введены некорректные данные");
			return 1;
		}
	z = getRecommendation(gender, height, weight);
	if (z == -1)
		printf( "Вес недостаточен.");
	if (z == 1)
		printf("Вес избыточен.");
	if (z == 0)
		printf("Вес идеален.");
	return  0;
}