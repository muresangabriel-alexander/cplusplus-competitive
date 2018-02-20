#include <iostream>

using namespace std;
int fr[11], order[11];
int main()
{
    int n, x, j;

    cin>>n;  for(int i=1; i<=n; ++i){cin>>x;
    if(x==0)++fr[0];
    while(x>0){
    ++fr[x%10];
    x/=10;}}

    for(int i=0; i<=9; ++i) { order[i]=i;}

                        for(int i=0;i<=9;i++) {
                        for(int j=0;j<=9-i-1;j++){
                        if(fr[j]>fr[j+1]){
                        swap(fr[j],fr[j+1]);
                        swap(order[j], order[j+1]);
                        }   }  }

    for(int i=0; i<=9; ++i){
    if(fr[i]>0)cout<<order[i]<<' ';
    }
    return 0;
}
