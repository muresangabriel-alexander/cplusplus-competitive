#include <fstream>
#include <vector>
#include <iostream>
using namespace std;



int a[1005];

bool prim(int n)
{
if(n==0||n==1)return 0;
if(n==2) return 1;
if(n%2==0)return 0;
for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
return 1;
}

int existaimpare(int st, int dr, int n)
{
    //cout<<st<<' '<<dr<<'\n';
    if(st==dr)
        {if(prim(a[st]))return a[st];
         else return -1;
         }

    else
        {
            int mij = (st+dr)/2;
            return max(existaimpare(st,mij,n),existaimpare(mij+1,dr,n));
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
