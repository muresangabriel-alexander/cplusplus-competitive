#include <iostream>

using namespace std;
int a[102][102], ii[102], jj[102], k;


int main()
{
    int n, s=0, cnt=0;
    cin>>n;

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){
        cin>>a[i][j];
        ii[i]+=a[i][j];
    }
    }

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){
      s+=a[j][i];
    }
    jj[++k]=s;
    s=0;}

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        if(ii[i]==jj[j])++cnt;
    }

    cout<<cnt;
    return 0;
}
