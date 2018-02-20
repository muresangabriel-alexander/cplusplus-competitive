#include <iostream>

using namespace std;
int main()
{
int n, x, iMin=9, xMin=-1, original;
cin>>n;

for(int i=1; i<=n; ++i){
	cin>>x;
	original = x;
	while(x>9)x=x/10;

	if(x<iMin){xMin = original; iMin = x;}
	else  if (x==iMin && original > xMin){xMin = original;}
}
cout<<xMin;
return 0;
}