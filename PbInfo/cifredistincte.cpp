#include <iostream>

using namespace std;

bool distin(int n){
int nr=0;
int fr[10]={0};
if(n<=10)return true;
while(n>0){++fr[n%10];n/=10;}
for(int i=0; i<10; ++i){
if(fr[i]>1)return false;
}
return true;
}



int main()
{
    int a[1002], n, ogli;
    bool cond=true;

    cin>>n;
    for(int i=1; i<=n; ++i){cin>>a[i];
    if(!distin(a[i]))cond=false;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
