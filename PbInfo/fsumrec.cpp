int suma(int a[], int n)
{
	if(n==1)return a[0];
	else
        {
            return a[n-1]+suma(a,n-1);
        }
}