
int cautare(int n, double v[], double x)
{
	if(n==1)
		{
			if(v[n-1]==x)return n-1;
			else return -1;
		}
	
	if(v[n-1]==x)return n-1;
	else return cautare(n-1, v,x);
	
}