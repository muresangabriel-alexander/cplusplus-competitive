#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int a[1004], b[1003], posy[1003], q, w;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>b[i];

    if(floor(sqrt(b[i]))==sqrt(b[i])){a[++q]=b[i]; posy[q]=i;}
    }


    sort(a+1, a+q+1);
   // for(int i=1; i<=q; ++i)cout<<a[i]<<' ';
    q=1;
    for(int i=1; i<=n; ++i){
        if(i==posy[q]){cout<<a[q]<<' '; ++q;}
        else{cout<<b[i]<<' ';}
    }

    return 0;
}
