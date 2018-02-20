#include <iostream>
#include <fstream>
using namespace std;

ifstream in("eratostene.in");
ofstream out("eratostene.out");

const int NMAX = 1000005;
bool ciur[NMAX];
int n, x, cnt=0;

int main()
{

        for(int i = 2; i<=NMAX; ++i)
    {
        if(ciur[i]==0){
            for(int j=i+i; j<=NMAX; j=j+i)
            ciur[j]=1;}
    }


in>>n;
    for(int i=1; i<=n; ++i){
    in>>x;
    if(ciur[x]==0){++cnt;}}
    out<<cnt;

    return 0;
}