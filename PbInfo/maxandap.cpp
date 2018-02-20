#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int n, x[1005], iMax= INT_MIN, cnt=0;
    cin>>n;
    
    for(int i= 1; i<=n; ++i){
    	cin>>x[i];
    	if(x[i]>iMax) {iMax = x[i]; }
    }
    for(int i= 1; i<=n; ++i){
    	if(x[i]==iMax) ++cnt;
    }
    cout<<iMax<<' '<<cnt;
	return 0;
}					