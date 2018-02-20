#include <iostream>

using namespace std;
int iMax = 0;
int a[205], s, fr[90], cnt;
int main()
{
int x, n;
cin>>x;
    for(int i=1; i<=x; ++i){
      cin>>a[i];
      n = a[i];
      while(n>0){
      s = s + n%10;
      n=n/10;
      }
      ++fr[s];
      if(iMax<s){iMax = s;}

      s=0;

    }

    for(int i =0; i<=iMax; ++i ){
    if(fr[i]==2){++cnt;}
    if(fr[i]>2){cnt += fr[i]*(fr[i]-1)/2;}
    }

    cout<<cnt;
    return 0;
}
