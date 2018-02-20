#include <iostream>
#include <algorithm>
using namespace std;
int a[1000];
int main()
{
   int n, x;
   cin>>n;

   for(int i=1; i<=n; ++i){
   cin>>x;
   while(x>9)x/=10;
   a[i]=x;
   }

   sort(a+1, a+n+1);

   for(int i=1; i<=n; ++i)cout<<a[i];
    return 0;
}
