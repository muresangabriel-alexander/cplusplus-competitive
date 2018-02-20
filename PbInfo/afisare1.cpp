#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int  n, a[1005];
    cin>>n;
    
    for( int i= 0; i<n; ++i){cin>>a[i];}
    --n;
    
    if(n%2==1){
    	for(int i=0; i<=n/2; ++i)cout<<a[i]<<' '<<a[n-i]<<' ';
   	}    
   	else{
   		for(int i=0; i<=(n/2)-1; ++i)cout<<a[i]<<' '<<a[n-i]<<' ';
   		cout<<a[n/2];
   		 
   	}
	return 0;
}					