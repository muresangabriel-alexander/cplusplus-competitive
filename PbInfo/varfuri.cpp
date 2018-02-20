#include <iostream>
using namespace std;

int main() {
	int a[1001], n, sum=0;
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>>a[i];
	}
	
	for(int i=2; i<=n-1 ; ++i){
		if(a[i]>a[i-1] && a[i]>a[i+1]){sum = sum + a[i];}
	}
	
	cout<<sum;
	
	return 0;
}