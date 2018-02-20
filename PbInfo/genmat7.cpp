#include <iostream>

using namespace std;
int a[26][26];

int main()
{
    int k;
    cin>>k;


    for(int j=1; j<=k; ++j){
    for(int i=1; i<=k; ++i){

    if(i==j || j==k+1-i)a[i][j]=0;
    else if(i<j && i+j>k+1)a[i][j]=2;
    else if(i>j && i+j<k+1)a[i][j]=1;
    else a[i][j]=3;
     cout<<a[i][j]<<' ';}cout<<'\n';}

    return 0;
}
