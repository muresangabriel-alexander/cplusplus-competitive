#include <fstream>

using namespace std;
ifstream fin("betasah.in");
ofstream fout("betasah.out");
int a[1003][1003];

int main()
{   int N,D,K;
    int d[2][100],i,j;
    int maxalbe,albe,x,y,atacate,l,c;

    fin>>N>>D>>K;
    for (i=0;i<D;++i)
    {
        fin>>x>>y;
        d[0][i]=x;
        d[1][i]=y;
        a[x][y]=1;
    }
    for (i=0;i<K;++i)
    {
        fin>>x>>y;
        a[x][y]=-1;
    }


    maxalbe=0;
    for (i=1;i<=N;++i)
    {
        albe=0;
        for(j=1;j<=i;++j)
            albe+=(a[i][j]!=-1);

        if (albe>maxalbe) maxalbe=albe;
    }




    atacate=0;       // numarul campurilor atacate de dame


    for (i=0;i<D;++i)
    {
        l=d[0][i];
        c=d[1][i];
        // directia verticala-sus
        while (l>=c && a[l][c]!=-1){
            if (a[l][c]==0){
                ++atacate;
                a[l][c]=1;
            }
            --l;
        }

        l=d[0][i];
        c=d[1][i];

        // directia oblic dreapta-sus
        while (l>=c && a[l][c]!=-1){
            if (a[l][c]==0){
                ++atacate;
                a[l][c]=1;
            }
            --l;
            ++c;
        }



        l=d[0][i];
        c=d[1][i];

        // directia orizontala-dreapta
        while (l>=c && a[l][c]!=-1){
            if (a[l][c]==0){
                ++atacate;
                a[l][c]=1;
            }
            ++c;
        }

        l=d[0][i];
        c=d[1][i];
        // directia oblic dreapta-jos
        while (l<=N && a[l][c]!=-1){
            if (a[l][c]==0){
                ++atacate;
                a[l][c]=1;
            }
            ++l;
            ++c;
        }


        l=d[0][i];
        c=d[1][i];
        // directia verticala-jos
        while (l<=N && a[l][c]!=-1){
            if (a[l][c]==0){
                ++atacate;
                a[l][c]=1;
            }
            ++l;
        }


        l=d[0][i];
        c=d[1][i];
        // directia oblic stanga-jos
        while (l<=N && c>0 && a[l][c]!=-1){
            if (a[l][c]==0){
                ++atacate;
                a[l][c]=1;
            }
            ++l;
            --c;
        }

        l=d[0][i];
        c=d[1][i];

        // directia orizontala-dreapta
        while (c>0 && a[l][c]!=-1){
            if (a[l][c]==0){
                ++atacate;
                a[l][c]=1;
            }
            --c;
        }



        l=d[0][i];
        c=d[1][i];
        // directia oblic-stanga-sus
        while (c>0 && a[l][c]!=-1){
            if (a[l][c]==0){
                ++atacate;
                a[l][c]=1;
            }
            --c;
            --l;
        }
    }


    fout <<maxalbe<<'\n'<<atacate<<'\n';
    return 0;
}
