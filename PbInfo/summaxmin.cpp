#include <iostream>
#include <limits.h>
using namespace std;

int a;

int main() {
	int n;
	int iMax=INT_MIN, iMin = INT_MAX;
	cin>>n;
	
	for(int i = 1; i<=n; ++i){
		cin>>a;
		if(a>iMax){iMax = a;}
		if(a<iMin){iMin = a;}	
		}
	
	
	cout<<iMax+iMin;
	return 0;
}