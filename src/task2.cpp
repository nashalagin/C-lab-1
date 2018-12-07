const char * greet(int hour, int min)
{
	if ((hour < 0 || hour>23) || (min < 0 || min>60)) return "Uncorrect time!";
	//"ночь" - с 00:00 до 06 : 00
	if (hour >= 0 && hour < 6) return "Good night!";
	//"утро" - с 06:00 до 11 : 00
	if (hour >= 6 && hour < 11) return "Good morning!";
	//"день" - с 11 : 00 до 18 : 00
	if (hour >= 11 && hour < 18)  return "Good day!";
	//"вечер" - с 18 : 00 до 00 : 00
	if (hour >= 18 && hour < 24) return "Good evening!";
}