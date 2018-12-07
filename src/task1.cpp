int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm')
		height -= 100;
	else
		height -= 110;
	if (height > weight) return -1;
	if (height < weight) return 1;
	else return 0;
}