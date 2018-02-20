#include <iostream>
#include <fstream>
using namespace std;
const int MAXN = 2000;
bool ciur[MAXN];

int main()
{
    int n;
    int cnt =0;
    cin>>n;
    for(int i=2; i<n; i++){
        if(ciur[i]==0){
            cout<<i<<' ';
            for(int j=i+i; j<=n; j=j+i){
                ciur[j]=1;
            }
        }
    }

    return 0;
}
