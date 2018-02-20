void dublare1(int &n)
{
	int cpy = n;
	int p=1;
	while (cpy>9)
	{
		cpy/=10;
		p*=10;
	}
	p*=10;
	n+=p*cpy;
}