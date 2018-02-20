#include <iostream>

using namespace std;
int s_cif(int n){
int s=0;
while(n>0)s+=n%10,n/=10;
return s;

}

int main()
{
    int x , y;
    int n, k=0;
    cin>>n;
    cin>>y;
    for(int i=1; i<n; ++i){
            cin>>x;
            if(s_cif(x)%2!=s_cif(y)%2)++k;
            y=x;

    }
    cout<<k;
    return 0;
}
