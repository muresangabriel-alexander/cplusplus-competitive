void afisvec(int a[], int n)
{
	if (n==0) return ;
	cout<<a[--n]<<' ';
	afisvec(a,n);
}
