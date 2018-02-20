#include <iostream>

using namespace std;
int s_cif(int n){
    int s=0;
    while (n>0){s+=n%10; n/=10;}
    return s;
}


int main()
{
    int n, x, k, s=0, ultimul;
    cin>>n;
    cin>>ultimul;
    for(int i=1; i<n; ++i){
    cin>>x;
    if(s_cif(x)==s_cif(ultimul))++s;
    ultimul=x;
    }
    cout<<s;
    return 0;
}
