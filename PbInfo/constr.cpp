#include <iostream>

using namespace std;

int b[204];


int sumcif(int n){
int s=0;

while(n>0){s+=n%10; n/=10;}
return s;
}

int main()
{

    int n, x, k=0;
    cin>>n;

    for(int i=1; i<=n; ++i){cin>>x;
    b[++k]=x%sumcif(x);
    }

    for(int i=1; i<=n; ++i)cout<<b[i]<<' ';
    return 0;
}
