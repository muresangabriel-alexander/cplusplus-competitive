//#include <iostream>
#include <fstream>

using namespace std;
ifstream cin("livada.in");
ofstream cout("livada.out");

int a[700005];

int main()
{
    int n, m, p;
    int cnt_max=0, k=0;


    cin>>n>>m>>p;
    for(int i=1; i<=n; ++i)
    {
         int cnt=1, b;
        for(int j=1; j<=m; ++j)cin>>a[j];

        b=a[1];

        for(int j=2; j<=m; ++j)
        {
            if(a[j]==b)++cnt;
            else --cnt;
            if(cnt==0){b=a[j];  cnt=1;}
        }

        cnt=0;
        for(int j=1; j<=m; ++j)
            if(a[j]==b)++cnt;
        if(cnt>=m/2+1)++k;

        b=a[1]; cnt=1;
        for(int j=2; j<=m; ++j)
        {
            if(a[j]==b){++cnt; if(cnt>cnt_max)cnt_max=cnt;}
            else{b=a[j]; cnt=1;}
        }

    }

    cout<<k<<'\n'<<cnt_max;
    return 0;
}
