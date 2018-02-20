#include <iostream>
#include <limits.h>
using namespace std;
double a[1005];
double s=0, med;
int  cnt=0, n;

int main() {
	
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>>a[i];
		s=a[i] + s;
	}
	
	med = s/n;
	
	for(int i=1; i<=n; ++i){
	if(a[i]>med)++cnt;}
	cout<<cnt;
	return 0;
}