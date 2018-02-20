#include <iostream>
using namespace std;
int a[100], iMax;
int main()
{
    int n, r;
    cin>>n;

    int aux=n;
    int cnt=0;
    int rez=0;
    int p=1, k=0;

    while(aux>0){
        a[++k]=aux%10;
        aux/=10;
    }

    for(int i=1; i<=k; ++i){
            for(int j=1; j<=k; ++j){
                if( j==i )++j;
                rez+=a[j]*p;
                p*=10;
            }

            if(iMax<rez)
                iMax=rez;
            rez=0; p=1;
    }

    cout<<iMax;

    return 0;
}
