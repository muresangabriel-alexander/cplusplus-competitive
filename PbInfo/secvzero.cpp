#include <iostream>

using namespace std;

int a[1004], cnt=1;
int len[1004];

int main()
{
    int n, maxlen=0, ipoz, lpoz, init_poz, lst_poz;
    cin>>n;

    for(int i=1; i<=n; ++i)cin>>a[i];

    for(int i=1; i<=n; ++i){
        if(a[i]==0){
        init_poz = i;
        while (a[i]==0 && i<=n){ ++cnt; ++i;}
        lst_poz = i-1;

        if(maxlen<cnt){maxlen = cnt; ipoz = init_poz; lpoz = lst_poz;}
cnt=0;
        }
    }

    cout<<ipoz<<' '<<lpoz;
    return 0;
}
