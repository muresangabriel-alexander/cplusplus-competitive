#include <iostream>
#include <limits.h>
using namespace std;

int a;

int main() {
	int iMax=INT_MIN;
	cin>>a;
	while(a!=0){
		if(a>iMax){iMax = a;}
		cin>>a;
	}
	
	if(iMax!=INT_MIN)cout<<iMax;
	else cout<<"NU EXISTA";
	return 0;
}