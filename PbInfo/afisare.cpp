#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int  n, a[1005];
    cin>>n;
    
    for( int i= 1; i<=n; ++i){cin>>a[i];}
    
   	for(int j=1; j<=n; ++j)
   	{if(j%2==0) cout<< a[j]<<' ';}
   	cout<<'\n';
    for(int i = n; i>0; --i ){
    	if(i%2==1) cout<<a[i]<<' ';
    }    
	return 0;
}					