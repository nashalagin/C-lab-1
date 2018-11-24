#include "Task1.h"


int main()
{
	setlocale(LC_ALL, "");
	char gender;
	float height, weight;
	int z;
	do
	{
		cout << "Введите ваш пол (m - мужской, w - женский) ";
		cin >> gender;

	} while (gender != 'm' && gender != 'w');
	do
	{
		cout << "Введите свой рост ";
		cin >> height;
		cout << "Введите свой вес ";
		cin >> weight;
		if (height < 110) cout << "Введен не корректный рост!Повторите попытку!" << endl;
		if (weight < 1) cout << "Введен не корректный вес!Повторите попытку!" << endl;
	} while (height <= 110 || weight <= 1);
	z = getRecommendation(gender, height, weight);
	if (z == -1)cout << "Вес недостаточен.";
	if (z == 1)cout << "Вес избыточен.";
	if (z == 0)cout << "Вес идеален.";
	getch();
	return  0;
}