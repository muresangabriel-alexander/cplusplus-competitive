
void P(int v[], int n, int &mini, int &maxi, int &sum)
{
		if(n==1)
		{
			maxi= mini= sum=v[n-1];
			return ;
		}
		
		P(v, n-1, mini, maxi, sum);
		maxi = max (maxi,v[n-1]);
		mini = min (mini, v[n-1]);
		sum+=v[n-1];
}