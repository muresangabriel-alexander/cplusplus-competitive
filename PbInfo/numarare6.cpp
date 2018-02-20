#include <iostream>
#include <limits.h>
using namespace std;
int a[1005];
int iMin=INT_MAX, iMax=INT_MIN, n, cnt=0;
int main() {
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>>a[i];
		if(a[i]>iMax){iMax=a[i];}
		if(a[i]<iMin){iMin=a[i];}
	}
	int dif = iMax - iMin;
	for(int i=1; i<=n; ++i){
		if(a[i]==dif)++cnt;
	}
	
	cout<<cnt;
	return 0;
}