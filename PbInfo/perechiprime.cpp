#include <iostream>

using namespace std;

bool prim(int n){
    if(n==1||n==0) return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
    return 1;
}

int main()
{
    int n;
    cin>>n;


    int k=3;
    int kk=5;
    while(n--){

        cout<<k<<' '<<kk<<'\n';
        k=kk;
        if(prim(kk+2))kk+=2;
        else { k+=2;
            while(!prim(k) || !prim(k+2))k+=2;
            kk=k+2;
        }

    }
    return 0;
}
