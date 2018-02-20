#include <iostream>
#include <fstream>
using namespace std;
const int MAXN = 20000005;
bool ciur[MAXN];
ifstream f("ciur.in");
ofstream g("ciur.out");
int main()
{
    int n;
    int cnt =0;
    f>>n;
    for(int i=2; i<n; i++){
        if(ciur[i]==0){
           ++cnt;
            for(int j=i+i; j<=n; j=j+i){
                ciur[j]=1;
            }
        }
    }

g<<cnt;
    return 0;
}
