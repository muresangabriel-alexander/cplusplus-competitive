#include <iostream>

using namespace std;
int a[10][10], b[8], k;

int main()
{
    int n;
    cin>>n;

    while(n>0){b[++k]=n%10; n/=10;}

    for(int j=1; j<=k+1; ++j){
    for(int i=1; i<=k+1; ++i){{if(i==j)a[i][j]=0;else if(i<j)a[i][j]=b[i]; else a[i][j]=b[j];}  cout<<a[i][j]<<' ';}cout<<'\n';}

    return 0;
}
