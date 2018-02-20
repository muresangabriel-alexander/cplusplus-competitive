#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int  n, a[1005];
    cin>>n;
    
    for( int i= 1; i<=n; ++i){cin>>a[i];}
    
   	for(int j=1; j<=n; ++j)
   	{
   		if(a[j]%a[n]==0) {cout<<a[j]<<' ';}
   	}
    
	return 0;
}					