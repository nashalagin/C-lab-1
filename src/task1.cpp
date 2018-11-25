int getRecommendation(char gender, float height, float weight)
{
	int a = 0, b = 0;
	b= weight;
	if (gender == 'm') 
		a = height - 100;
	if (gender == 'w') 
		a = height - 110;
	if (a > b) return -1;
	if (a < b) return 1;
	else return 0;
}