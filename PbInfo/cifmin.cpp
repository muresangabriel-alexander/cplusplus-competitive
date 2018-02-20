#include <iostream>
#include <algorithm>
using namespace std;
int a[1000], p;
int main()
{
   int n, x;
   cin>>n;

   for(int i=1; i<=n; ++i){
   cin>>x; int iMin=9;
   while(x>0){if(x%10<iMin){iMin=x%10;}x/=10;}
   a[i]=iMin;
   }

   sort(a+1, a+n+1);
    for(int i = 1; i<=n; ++i){if(a[i]!=0){cout<<a[i]; p=i; break;}}

   for(int i=1; i<=n; ++i){if(i==p)++i; cout<<a[i];}
    return 0;
}
