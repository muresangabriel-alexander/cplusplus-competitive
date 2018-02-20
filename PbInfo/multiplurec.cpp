int multiplu (int v[], int n, int k)
{
		
		
		if(n==1)
			{
			 if( v[n-1]%k==0 && v[n-1]%10==k)return 1;
			 else return 0;
			}
	   
	    if( v[n-1]%k==0 && v[n-1]%10==k)return 1+multiplu(v, n-1, k);
	    else return multiplu(v, n-1, k);
}
