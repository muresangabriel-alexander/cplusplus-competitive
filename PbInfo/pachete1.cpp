#include <iostream>
using namespace std;

int a[1001];

int main() {
	int n;
	long long c, m=0, s=0;
	cin>>n>>c;
	
	for(int i = 1; i<=n; ++i){
		cin>>a[i];
	}
	
	for(int i = 1; i<=n; ++i){
		if(s+a[i]<=c){s=s+a[i];}
		else{++m; s=0; --i;}
	}
	
	cout<<m+1;
	return 0;
}