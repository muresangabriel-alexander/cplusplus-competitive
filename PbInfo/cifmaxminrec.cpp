void cifmaxmin(int n, int & max, int & min)
{
	if(n < 10)
		max = min = n;
	else
	{
		cifmaxmin(n / 10 , max , min);
		if(n % 10 > max)
			max = n % 10;
		if(n % 10 < min)
			min = n % 10;
	}
}