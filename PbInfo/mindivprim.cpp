bool prim (int n)
{
	if(n==0 || n==1)return 0;
	if(n==2)return 1;
	if(n%2==0)return 0;
	for(int d=3; d*d<=n; d +=2)if(n%d==0)return 0;
	return 1;
}
#include <cmath>
int minDivPrim(int n)
{
		if (prim (n)){ return n;}
		if (n==4) {return 2;}
		
		
		int sol = 1;
		if(n%2==0  )
		{   //cout<<"a"<<'\n';
			
			
			sol*=2;
			if(prim(n/2))sol*=n/2;
		}
		
		
	//	cout<<sol<<'\n';
		if(sqrt(n)==floor(sqrt(n)) && prim((int)sqrt(n)))sol*=sqrt(n);
	//	cout<<sol<<'\n';
		for(int d=3; d*d<n; d++)
		if(n%d==0)
			{if(prim(d))sol*=d;
			 if(prim(n/d))sol*=n/d;
			}
		return sol;
}
