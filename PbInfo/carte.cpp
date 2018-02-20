//#include <iostream>
#include <fstream>
using namespace std;
ifstream cin("carte.in");
ofstream cout("carte.out");
int a[10005];


int main()
{
    int n;
    cin>>n;
    int cnt =0;
    int cnt_max=0;
    int iMax=0;
    for(int i=1; i<=n; ++i)cin>>a[i];
    int x=1;

    while(x<=n){
    bool gasit =1;
    int cnt_pag=0;
    int ii=1;
        while(gasit){
        gasit =0;
        for(int i=ii; i<=n; ++i)
        if(x==a[i])     ++cnt_pag,x++,gasit=1,a[i]=-1, ii=i;
      //  cout<<cnt_pag<<' ';
        }
        ++cnt;

        if(cnt_pag>iMax)iMax=cnt_pag,cnt_max=cnt;
    }


    cout<<cnt<<' '<<cnt_max<<' '<<iMax;

    return 0;
}
