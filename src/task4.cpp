float convert(int feet, int inches)
{
	inches += feet * 12;
	return inches * 2.54;
}