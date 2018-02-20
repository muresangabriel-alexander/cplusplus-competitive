#include <iostream>

using namespace std;
int cifre[40];

void solve(long long n){
    int k=0;
    while(n>0){cifre[++k]=n%10; n/=10;}

    int iMax=0;

    for(int i=2; i<k;++i){
    int n1=0, n2=0;
    int p=1;

            for(int j=1; j<i; ++j)n1=p*cifre[j]+n1,p*=10;
    p=1;
            for(int j=i+1; j<=k; ++j)n2=p*cifre[j]+n2,p*=10;

        iMax=max(iMax,n1*n2);

    }

    cout<<iMax<<' ';

}



int main()
{
    long long  n;
    long long s =1;
    cin>>n;
  //  int copy_nn=n;
    solve(n);

    long long p=9;
    int digit=1;

    while(p<=n){
        s+=(p - p/10)*digit;
        p=p*10 +9;
        ++digit;
    }
    p/=10;
    n-=p;

    if(n!=0)
    s+=n*digit;


    cout<<s;
    return 0;
}
