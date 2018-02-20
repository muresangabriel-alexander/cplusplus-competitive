#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("mincols1.in");
ofstream cout("mincols1.out");

int a[102][102], iMin[50]={};


int main()
{
    int n, s=0, k=1;
  	bool okappa=false;
    cin>>n;
    for(int i=1; i<=n; ++i)iMin[i]=INT_MAX;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        cin>>a[i][j];
    }


    for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){
        if(a[j][i]<iMin[k])iMin[k]=a[j][i];
    }++k;
    }

  //  for(int i=1; i<=n; ++i)cout<<iMin[i]<<' ';
    k=1;
    int b=0;
    int p=1;
    for(int i=1; i<=n; ++i){
      if(a[i][n-b]==iMin[n-b]){p= p* a[i][n-b]%10; okappa=true;}
    ++b;
    }

   if(okappa)cout<<p;
  else cout<<"NU EXISTA";

    return 0;
}
