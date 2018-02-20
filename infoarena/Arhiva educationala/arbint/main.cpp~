#include <fstream>

using namespace std;
ifstream cin("arbint.in");
ofstream cout("arbint.out");


int n, t;
int MaxArb[4*100001+66];
int start, finish, pos, val, maxim;

inline int MAX (int a, int b)
{if(a>b)return a; return b;}

void update (int nod, int lef, int rig)
{
    if(lef==rig) {MaxArb[nod]=val; return ;}

    int m = (lef + rig)/2;
    if(pos<=m)update(2*nod,lef, m);
    else      update(2*nod+1,m+1,rig);

    MaxArb[nod]=MAX(MaxArb[2*nod],MaxArb[2*nod+1]);

}

void query(int nod, int lef, int rig)
{
    if(start<=lef && rig<=finish) {if(maxim<=MaxArb[nod]) maxim=MaxArb[nod]; return;}


    int m=(lef+rig)/2;
    if(start<=m)query(2*nod,lef,m);
    if (m<finish)query(2*nod+1, m+1,rig);

}

int main()
{

    cin>>n>>t;
    for(int i=1; i<=n; ++i)
    {
    int x;
    cin>>x;
    val=x; pos=i;
    update(1,1,n);
    }

    for(int i=1 ;i<=t; ++i)
    {
        int op, a, b;
        cin>>op>>a>>b;
        if(op==0){maxim=-1, start=a, finish=b; query(1,1,n); cout<<maxim<<'\n';}
        else {pos=a, val=b; update(1,1,n);}
    }
    return 0;
}
