#include "task1.h"


int main()
{
	setlocale(LC_ALL, "");
	char gender;
	float height=0, weight=0;
	int z=0;
	/*do
	{*/
		cout << "Введите ваш пол (m - мужской, w - женский) ";
		cin >> gender;

	/*} while (gender != 'm' && gender != 'w');
	do
	{*/
		cout << "Введите свой рост ";
		cin >> height;
		cout << "Введите свой вес ";
		cin >> weight;
	/*	if (height < 110) cout << "Введен не корректный рост!Повторите попытку!" << endl;
		if (weight < 1) cout << "Введен не корректный вес!Повторите попытку!" << endl;*/
	/*} while (height <= 110 || weight <= 1);*/
		if ((gender != 'm' && gender != 'w')||( height <= 0 && height > 250) ||( weight < 0 && weight > 250))
		{
			cout << "Введены некорректные данные";
			return 1;
		}
	z = getRecommendation(gender, height, weight);
	if (z == -1)
		cout << "Вес недостаточен.";
	if (z == 1)
		cout << "Вес избыточен.";
	if (z == 0)
		cout << "Вес идеален.";
	return  0;
}