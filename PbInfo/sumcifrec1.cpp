void sumcif(int n ,int & s)
{
	if(n < 10)
		s = n;
	else
	{
		int t;
		sumcif(n / 10 , t);
		s = t + n % 10;
	}
}
