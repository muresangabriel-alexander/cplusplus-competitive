#include <iostream>
#include <limits.h>
using namespace std;
int a[1005];
int iMin=INT_MAX, iMax=INT_MIN, n, pozmax, pozmin;
int main() {
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>>a[i];
		if(a[i]>iMax){iMax=a[i]; pozmax = i;}
		if(a[i]<iMin){iMin=a[i];  pozmin=i;}
	}
	
	cout<<pozmin<<' '<<pozmax;
	return 0;
}