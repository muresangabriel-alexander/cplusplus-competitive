#include <iostream>
#include <limits.h>
using namespace std;

int a;

int main() {
	int n;
	int iMax=INT_MIN;
	cin>>n;
	
	for(int i = 1; i<=n; ++i){
		cin>>a;
		if(a>iMax){iMax = a;}
	}
	
	
	cout<<iMax;
	return 0;
}