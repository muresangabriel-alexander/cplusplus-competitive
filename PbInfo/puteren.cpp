#include <iostream>


int a[1000001],c[100001],b[1001];

using namespace std;

int main()
{
    int n,x,v=0,k=0,p=0,q=1;
    cin>>n>>x;


    while(n>0)  // descompunere in cifre
    {
        v=n%10;
        a[++k]=v;
        b[k]=v;
        n=n/10;
    }           //avem numarul n pus in vectorii A si B

    p=k;

    for(int i=1;i<x;i++)
    {
        q=1;

        for(int j=1;j<=k;j++) // parcurgem cifrele lui N din vectorul B
        {
            for(int l=1;l<=p;l++)  //parcurgem cifrele din vectorul A
            {
                c[l]=c[l]+a[l]*b[j]*q;
            }
            q=q*10;
        }



        for(int j=1;j<=p;j++)
        {
            if(c[j]>9)
            {
                c[j+1]=c[j+1]+c[j]/10;
                c[j]=c[j]%10;
                if(j==p)p++;
            }
        }


        for(int j=1;j<=p;j++)
        {
            a[j]=c[j];
            c[j]=0;
        }

    }


    for(int i=p;i>=1;i--)
    {
        cout<<a[i];
    }
    return 0;
}
