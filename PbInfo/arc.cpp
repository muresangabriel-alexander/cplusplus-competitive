#include <fstream>
using namespace std;

ifstream fin("arc.in");
ofstream fout("arc.out");

struct sec
{
    int v,l;
};

sec A[10001];

void afis(sec A[], int n)
{
    for(int i=1;i<=n;i++)
        fout<<A[i].v<<" "<<A[i].l<<endl;
    fout<<endl;
}

int main()
{
    int p,n,x,y;
    fin>>p;
    if(p==1) //cerinta 1
    {
        int c=1;
        fin>>n;
        fin>>x;
        for(int i=1;i<n;i++)
        {
            fin>>y;
            if(x!=y) c++;
            x=y;
        }
        fout<<c;
    }
    else//cerinta 2
    {
        int l=1,ns=0;
        fin>>n;
        fin>>x;
        for(int i=1;i<n;i++)
        {
            fin>>y;
            if(x==y) l++;
            else
            {
                ns++;
                A[ns].v=x;
                A[ns].l=l;
                l=1;
            }
            x=y;
        }
        ns++;
        A[ns].v=x;
        A[ns].l=l;
        //afis(A,ns);
        int lmax;
        do
        {
            int p;
            lmax=0;
            for(int i=1;i<=ns;i++)
                if(A[i].l>lmax) { p=i; lmax=A[i].l;}
            if(lmax>=3)
            {
                int s=p-1,d=p+1;
                //merg cat se elimina bile din recompunere
                while(A[s].v==A[d].v && A[s].l+A[d].l>=3 && s>0 && d<=ns)
                {
                    s--; d++;
                }
                //sterg de la s+1 la d-1
                for(int i=s+1,j=d; j<=ns;i++,j++)
                    A[i]=A[j];
                ns=ns-(d-1-s);
                //daca sunt 2 egale alaturate cu val egale si l=1
                if(A[s+1].v==A[s].v)
                {
                    for(int i=s;i<ns;i++)
                        A[i]=A[i+1];
                    A[s].l=2;
                    ns--;
                }
            }
        }
        while(lmax>=3);
        int k=0;
        for(int i=1;i<=ns;i++)
            k=k+A[i].l;
        fout<<k<<endl;
        for(int i=1;i<=ns;i++)
            for(int j=1;j<=A[i].l;j++)
                fout<<A[i].v<<endl;
    }

    return 0;
}