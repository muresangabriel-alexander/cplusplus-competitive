#include <fstream>

using namespace std;
ifstream cin("expresie8.in");
ofstream cout("expresie8.out");

long long a[1005];

int main()
{
    int n;

  unsigned   long long consecv=0, cosecvsum=0;
  unsigned  long long maxp1=0, maxpsum1=0;
   unsigned  long long maxp2=0, maxpsum2=0;

    unsigned long long s=0, best_case=0, current_best=0;

    cin>>n;
    for(int i=1; i<=n; ++i){cin>>a[i]; s+=a[i];

        if(i>=3 && consecv<a[i]*a[i-1]*a[i-2]){consecv=a[i]*a[i-1]*a[i-2]; cosecvsum = a[i]+a[i-1]+a[i-2];}
        if (i>1 && a[i]*a[i-1]>maxp1){ maxp1 = a[i]*a[i-1]; maxpsum1=a[i]+a[i-1]; }
        else if(i>1 && a[i]*a[i-1]>maxp2){maxp2 = a[i]*a[i-1]; maxpsum2=a[i]+a[i-1];}
    }

    if(maxp1+maxp2>consecv){s=s - maxpsum1-maxpsum2; s+=maxp1+maxp2;}
    else {s-=cosecvsum; s+=consecv; }

    cout<<s;
    return 0;
}
