#include <iostream>

using namespace std;
int s_cif(int n){
int s=0;
    while (n>0){s+=n%10; n/=10;}
return s;
}


int main()
{
    int n, s=0;
    cin>>n;
    s=s_cif(n);

    while(s>9){
        s=s_cif(s);
    }
    cout<<s;
    return 0;
}
