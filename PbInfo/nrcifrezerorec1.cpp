int nr_cif_zeo(int n)
{
	if(n < 10)
		if( n == 0)
			return 1;
		else
			return 0;
	else
		if(n % 10 == 0)
			return 1 + nr_cif_zeo(n / 10);
		else
			return nr_cif_zeo(n / 10);
}


void nr_cif_zero(long long n, int &f)
{
   f=nr_cif_zeo(n);
}
