#include <iostream>

using namespace std;
int main()
{
int x, iMin=1000001;
cin>>x;
while(x!=0){
	if(x>0 && x<iMin){iMin= x;}
	cin>>x;
}
if(iMin == 1000001){cout<<"NU EXISTA";}
else
{cout<<iMin;}
return 0;
}