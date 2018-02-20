#include <iostream>
using namespace std;

int s_cif(int n)
{
	int s=0;
	while (n>0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
int main ()
{
	int n ;
	cin>>n;
	
	int maxx=0, minn=999999999;
	int s_max = 0, s_min=9999999;
	
	for(int i=1; i<=n; ++i)
	{
		int x; 
		cin>>x;
		if(s_max<s_cif(x))maxx=x,s_max=s_cif(x);
		if(s_min>s_cif(x))minn=x,s_min=s_cif(x);
	}
	
	cout<<minn<<'\n'<<maxx;
}
