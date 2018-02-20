#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("proiecte.in");
ofstream cout("proiecte.out");

short a[1004];
short pos[1004];

int main()
{
   int n, t, s=0, i, cnt=0;
   cin>>n;
   for(int i=1; i<=n; ++i){cin>>a[i]; pos[i]=i;}

   for(int i=1; i<=n; ++i)
   for(int j=i; j<=n; ++j){
   if(a[i]>=a[j]){swap(a[i], a[j]); swap(pos[i], pos[j]);}
   }


   for( i=1; i<=n;++i){
       cout<<pos[i]<<' ';
   }
    return 0;
}