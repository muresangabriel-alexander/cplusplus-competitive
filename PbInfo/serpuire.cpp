#include <iostream>

using namespace std;
int a[30][30];

int main()
{
    int n ;
    cin>>n;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j)cin>>a[i][j];

    bool turn=1;
    cout<<a[1][1]<<' ';
    for(int i=2; i<=n; ++i){
    int ii=i;
    int j=1;
    if(turn){
    while(ii>0)cout<<a[ii][j]<<' ', ++j,--ii;
    turn=!turn;}
    else{
     while(ii>0)cout<<a[j][ii]<<' ', ++j,--ii;
     turn=!turn;
    }
    }
    turn = !turn;
    for(int i=2; i<n; ++i){
    int ii = i;
    int j=n;
    if(turn){
    while(ii<=n)cout<<a[ii][j]<<' ', j--, ++ii;
    turn=!turn;}
    else{
    {
    while(ii<=n)cout<<a[j][ii]<<' ', j--, ++ii;
    turn=!turn;}}
    }

    cout<<a[n][n];

    return 0;
}