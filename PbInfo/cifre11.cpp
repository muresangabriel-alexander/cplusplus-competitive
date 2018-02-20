#include <fstream>
#include <limits.h>
using namespace std;


ifstream cin("cifre11.in");
ofstream cout("cifre11.out");

int a[10005];



int sum_cif(int n){
int s=0;
while (n>0){s+=n%10; n/=10;}
return s;
}



int secv_cons_cif(int n){
        int cnt_secv=0, cons_Max=-1;
        int fr[10];
        for(int i=0; i<=9; ++i)fr[i]=0;

        while(n>0){++fr[n%10]; n/=10;}

        for(int i=0; i<=9; ++i){
        if(fr[i]!=0 ){++cnt_secv;
        if(cons_Max<cnt_secv){cons_Max=cnt_secv;}
        }
        else cnt_secv=0;
        }

return cons_Max;
}


int fr[10];
int main()
{
    int n, iSunCifMin=1000, iMax=-1, iMin=INT_MAX, iMaxSecv=1;
    cin>>n;
    for(int i=1; i<=n; ++i){
            cin>>a[i];
            int frcif[10]; for(int i=0; i<=9; ++i)frcif[i]=0;
            int aux=a[i]; if(aux==0)++frcif[0]; while(aux>0){++frcif[aux%10]; aux/=10;}
            for(int i=0; i<=9; ++i){/*cout<<frcif[i]<<' '<<i<<'\n'; */if(frcif[i]>0)++fr[i];}

            if(iSunCifMin>sum_cif(a[i])){iSunCifMin=sum_cif(a[i]); iMax=a[i];}
            if(iSunCifMin==sum_cif(a[i]) && iMax<a[i])iMax=a[i];

            if(iMaxSecv<secv_cons_cif(a[i])){iMaxSecv=secv_cons_cif(a[i]); iMin=a[i];}
            if(iMin>a[i] && secv_cons_cif(a[i])==iMaxSecv){iMin = a[i];}
    }
    cout<<iMax<<'\n';
    cout<<iMin;
    cout<<'\n';
    int frMax=0;
    for(int i=0; i<=9; ++i)if(frMax<fr[i])frMax=fr[i];
    for(int i=0; i<=9; ++i)if(fr[i]==frMax)cout<<i<<' ';

    return 0;
}
