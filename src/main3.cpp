#include "task3.h"

int main()
{
	double angle=0;
	char type,*buf;
	buf = new char[100];
	/*char *buf;
	buf = new char[];*/
	cin >> angle >> type;
	if (type != 'R' && type != 'D')
	{
		cout << "Uncorrect type!";
		return 1;
	}
	/*angle = convert(angle, type);
	if (type == 'R')
		type = 'D';
	else type = 'R';
	cout << angle << type<<endl;*/
	//sprintf(buf, "%f%c", angle,type);
	buf = convert(buf, angle, type);
	printf("%s", buf);
	getch();
	return 0;
}