#include <iostream>
#include <limits.h>
using namespace std;
int a[1005];
int iMin=INT_MAX, iMax=INT_MIN, n, pozmax=0, pozmin=0, s=0;
bool cond;
int main() {
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>>a[i];
		if(a[i]%2==0 && cond==0){cond=1; pozmin=i;}
		if(a[i]%2==0) {pozmax = i;}}
	
	for(int i=pozmin; i<=pozmax; ++i){
	s=s+a[i];}
	if(pozmin!=0){
	cout<<s;}
	else{cout<<"NU EXISTA";}
	return 0;
}