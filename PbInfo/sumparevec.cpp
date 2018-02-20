#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
ifstream fin("bipartit1mare.in");
ofstream fout("bipartit1mare.out");


int a[1005];

int existaimpare(int st, int dr, int n)
{
    //cout<<st<<' '<<dr<<'\n';
    if(st==dr)
        {if(a[st]%2==0)return a[st];
         else return 0;
         }

    else
        {
            int mij = (st+dr)/2;
            return (existaimpare(st,mij,n)+existaimpare(mij+1,dr,n));
        }
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; ++i)cin>>a[i];
    cout<<existaimpare(1,n,n);
    return 0;
}
