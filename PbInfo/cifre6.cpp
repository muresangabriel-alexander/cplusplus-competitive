#include <algorithm>
void numar(int ni, int k, int &rezi){
        int a[50], ki=0, rez=0;
        int n=ni;
        while(n>0){a[++ki]=n%10; n/=10;}
        sort(a+1, a+ki+1);
        for(int i=ki; i>ki-k; --i)rez=rez*10 + a[i];
        if(ni==0)rezi=0;
        rezi=rez;
}