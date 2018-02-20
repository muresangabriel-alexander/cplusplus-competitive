#include <iostream>

using namespace std;

int main()
{
    int n, x, a, b, inti=0;
    cin>>n;
    for(int i=1; i<=n; ++i){
        cin>>x;
        int a=1, b=1, s=0;
        if(x==1)cout<<"DA"<<'\n';
        else{ while(a+b<=x){s=a+b; a=b; b=s;}
        if(s==x)cout<<"DA"<<'\n'; else cout<<"NU"<<'\n';}
    }
    return 0;
}
