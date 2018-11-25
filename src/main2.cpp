#include "task2.h"

int main()
{
	int hour, min;
	cin >> hour;
	cin >> min;
	cout << "\r" << hour << ":" << min << endl;
	cout << greet(hour, min);
	return 0;

}