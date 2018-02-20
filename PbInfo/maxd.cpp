#include <fstream>
#include <cmath>
using namespace std ;
 
ifstream in("maxd.in") ;
ofstream out("maxd.out") ;
 
int a, b, sol, contor, nrdiv_max, MIN;
bool c[65536];
int prim[10000], k;
 
 
 
int main()
{
    in >> a >> b ;
 
    int r=sqrt(b);
    c[0]=c[1]=1;
 
    for(int i=2; i*i<=r; ++i)
        if(!c[i]){
 
        prim[++k]=i;
 
        for(int j=i+i; j<=r; j+=i)
            c[j]=1;
        }
 
        for(int j=sqrt(r)+1; j<=r; ++j)
        if(!c[j]) prim[++k]=j;
 
 
 
//for(int i=1; i<=k; ++i)out<<prim[i]<<' ';
 
//out<<'\n';
    for(int i=a; i<=b; ++i)
    {
    int n=i, d=1, nrdiv=1;
        while(n>=prim[d]*prim[d] && d<=k)
        {
 
            if(!(n%prim[d]))
            {
                    int e=0;
                    while(!(n%prim[d])){n/=prim[d]; ++e;}
 
                    nrdiv=nrdiv*(e+1);
            }
            else ++d;
        }
        if(n!=1) nrdiv*=2;
   //     out<<i<<' '<<nrdiv<<'\n';
        if(nrdiv>nrdiv_max){MIN=i; nrdiv_max=nrdiv; contor=1;}
        else if(nrdiv==nrdiv_max)++contor;
    }
out<<MIN<<' '<<nrdiv_max<<' '<<contor;
 
    in.close() ;
    out.close() ;
    return 0 ;
}