#include <iostream>

using namespace std;
bool ciur[100004];

int main()
{
    int a, b, cnt=0;
    cin>>a>>b;
    if(a>b)swap(a,b);

    for(int i=2; i<=b; ++i){
            if(ciur[i]==0){
            if(i>=a)++cnt;
            for(int j=i+i; j<=b; j+=i)ciur[j]=1;
            }
    }

    cout<<cnt;
    return 0;
}
