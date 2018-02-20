#include <iostream>

using namespace std;

int pare [405], k;
int impare[405], l;

int main()
{
    int n ;
    cin>>n;
    for (int i=1; i<=n*n*4; ++i)pare[i]=i*2;
     for(int i=1; i<=n*n*4; ++i)impare[i]=i*2-1;

    k = 2*n;
     for(int i=1; i<=n*2; ++i)
     {
        if(i%2==1)for(int j=1; j<=2*n; ++j)cout<<impare[++l]<<' ';
        else {for(int i=k; i>=k-2*n+1; --i) cout<<pare[i]<<' ';
                k = k + 2*n;
        }

        cout<<'\n';

     }

    return 0;
}
