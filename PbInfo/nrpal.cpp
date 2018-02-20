#include <iostream>

using namespace std;

int main()
{
    int a, b, cnt=0;
    cin>>a>>b;
    if(a>b)swap(a,b);

    for(int x=a; x<=b; ++x){
    int olg =0, aux;
    aux = x;
    while(aux>0){olg = olg*10 + aux%10; aux /= 10;}
    if(olg==x)++cnt;
    }

    cout<<cnt;
    return 0;
}
