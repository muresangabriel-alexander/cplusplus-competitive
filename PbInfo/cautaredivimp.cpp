#include <iostream>
#include <algorithm>
using namespace std;
int a[1005], b[1005];


bool binary(int st, int dr,  int val)
{
		if(st>dr)return 0;
		
		int mij= (st+dr)/2;
		
		if(a[mij]==val)return 1;
		else if(a[mij]>val) return binary(st, mij-1, val);
		else return binary(mij+1, dr, val);
		

		
		
}


int main ()
{
	int n, m;
	cin>>n;
	for(int i=1; i<=n; ++i)cin>>a[i];
	cin>>m;
	for(int i=1; i<=m; ++i)cin>>b[i];
	
	sort(a+1, a+n+1);
	for(int i=1; i<=m; ++i)
	{
		cout<<binary(1,n,b[i])<<' ';
		
	}
	
	
}
