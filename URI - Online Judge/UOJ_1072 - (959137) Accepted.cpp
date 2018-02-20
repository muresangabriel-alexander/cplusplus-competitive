#include <iostream>

using namespace std;

int main()
{
    int n, a[10000], i, in=0, out=0;
    cin>>n;

    for(i=0; i<=n-1; i++){
        cin>>a[i];
    }

    for(i=0; i<=n-1; i++){
        if(a[i]<=20 && a[i]>=10){
            in++;
        }
        else{out++;}
    }
    cout<<in<<" in"<<'\n';
    cout<<out<<" out"<<'\n';
    return 0;
}
