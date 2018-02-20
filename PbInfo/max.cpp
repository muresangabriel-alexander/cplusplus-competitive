#include <iostream>

using namespace std;
bool ciur[10005];


void ciurr(){
    for(int i=2; i<=10000; ++i)
            if(!ciur[i])
            for(int j=i+i; j<=10000; j+=i)
            ciur[j]=1;
}


#include <cmath>


int judge(int n){
if(n==1) return 3;
if(!ciur[n]) return 0;
if(sqrt(n)==floor(sqrt(n)))return 3;
return 1;
}

int main()
{
    int n;
    int s=0;
    cin>>n;
    ciurr();

    for(int i=1; i<=n; ++i)
    {
        int x;
        cin>>x;

        int casee=judge(x);
        s+=casee*x;
    }

    cout<<s;

    return 0;
}
