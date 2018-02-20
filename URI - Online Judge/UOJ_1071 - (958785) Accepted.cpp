#include <iostream>

using namespace std;

int main()
{
    int n, i, m, summ=0;
    cin>>n>>m;
if(n<m){
    for(i=n+1; i<m; i++){
        if(i%2!=0){summ=summ+i;}
    }}
    else{if(n>m){
        for(i=m+1; i<n; i++){
        if(i%2!=0){summ=summ+i;}
    }}}

    cout<<summ<<'\n';
    return 0;
}
