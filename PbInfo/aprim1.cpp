#include <iostream>
#include<cmath>
using namespace std;

int aprim(int n)
{

        int f,k=0,e,x=sqrt(n);
        while(n%2==0)
        {
         n/=2;
         k++;
        }
        if (k>=2)
            return 0;
        f=1;
        while (n!=1 && f<=x)
        {
            f+=2;
            e=0;
            while(n%f==0)
            {
                k++;
                n/=f;
                e++;
            }
            if(e>1 || k>2)
            return 0;

}
if(n!=1)
    k++;
 if (k==2)
    return 1;
 return 0;
}


int main()
{
        int i,n,x,nr=0;
        cin>>n;
        for(i=1;i<=n;i++)
            {
              cin>>x;
              if(aprim(x)==1)
                    nr++;
            }
        cout<<nr;
        return 0;
}
