#include <iostream>
#include <limits.h>
#include <iomanip>
#include <cmath>

using namespace std;
double clasament[1009];
int pos[1009];
double note[60];

int main()
{
    int n, m;
    cin>>n>>m;
    for(int k=1; k<=n; ++k){
        int iMax=INT_MIN, iMin=INT_MAX, s=0, cnt_max=0, cnt_min=0;

        for(int i=1; i<=m; ++i){cin>>note[i]; if(iMax<note[i]){iMax=note[i]; cnt_max=0;} if(iMax==note[i])++cnt_max;
                                              if(iMin>note[i]){iMin=note[i]; cnt_min=0;} if(iMin==note[i])++cnt_min;
                                              s+=note[i];}

        clasament[k]=(double)(s-iMax*cnt_max - iMin*cnt_min)/(m-cnt_max-cnt_min);
        pos[k]=k;
        int j=k;
     //   while (j > 0 && (clasament[j - 1] > clasament[j] || clasament[j-1]==clasament[j] && pos[j-1]<pos[j])) {swap(clasament[j], clasament[j-1]); swap(pos[j], pos[j-1]); j--; }

    }

    for(int i=1; i<=n; ++i)
        for(int j=i+1; j<=n; ++j){
            if(clasament[i]<clasament[j] || clasament[i]==clasament[j] && pos[i]>pos[j]){swap(clasament[j], clasament[i]); swap(pos[j], pos[i]);}
        }



        for(int i=1; i<=n; ++i)cout<<pos[i]<<' ';
    return 0;
}
