#include <fstream>
#include <string.h>
//#include <iostream>

using namespace std;
ifstream cin("rotund.in");
ofstream cout("rotund.out");
int a[55], c;
int cif[50],k;
int sablon[20];


void desc_cif(int n)
{
        memset(cif,0,50);
        memset(sablon,0,20);
        k=0;
        while(n)
        {
            sablon[++k]=n%10;
            cif[k]=n%10;
            n/=10;

        }
        for(int i=1; i<=k; ++i)
        cif[k+i]=sablon[i];
}



int main()
{
    int n;
    cin>>n;

    for(int kk=1; kk<=n; ++kk)
    {
        int x;
        cin>>x;
        desc_cif(x);
        bool ok=0;
        for(int i=1; i<k; ++i)
        {
            bool okappa=1;
            for(int j=i+1; j<=i+k; ++j){
                                        if(cif[j]!=sablon[j-i]){okappa=0;}
                                        if(okappa && j==k+i){ ok=1;break;}
                                        }

            if(ok){a[++c]=x; break;}
        }

    }

    cout<<c<<'\n';
    for(int i=1; i<=c; ++i)cout<<a[i]<<' ';

    return 0;
}
