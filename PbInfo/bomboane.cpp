#include <fstream>
//#include <iostream>
#include <cmath>
using namespace std;
ifstream cin("bomboane.in");
ofstream cout("bomboane.out");


int a[1005], slo[2005][5];
int n;
int s=0;

int getMax()
{
    int maxx=-1, pos;
    for(int i=1; i<=n; ++i)
        {
            if(maxx<a[i])maxx=a[i],pos=i;
        }
    return pos;
}

int getMin()
{
    int minn=999999, pos;
    for(int i=1; i<=n; ++i)
        {
            if(minn>a[i])minn=a[i],pos=i;
        }
    return pos;
}

int valid(){for(int i=1; i<n; ++i)if(a[i]!=a[i+1])return 0; return 1;}


int main()
{
    int op=0;
    cin>>n;
    for(int i=1; i<=n; ++i){cin>>a[i]; s+=a[i];}

    double mid=(double)s/n;
    if(mid!=floor(mid)){cout<<-1; return 0;}
    int aver=mid;
    while (!valid())
        {
            int maxx=getMax();
            int minn=getMin();

            int cattrebe=aver-a[minn];
            a[minn]+=cattrebe;
            a[maxx]-=cattrebe;
            ++op;
            slo[op][1]=maxx;
            slo[op][2]=minn;
            slo[op][3]=cattrebe;
        }

    cout<<op<<'\n';
    for(int i=1; i<=op; ++i){
        for(int j=1; j<=3; ++j)cout<<slo[i][j]<<' ';
        cout<<'\n';
    }

    return 0;
}
