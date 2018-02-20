#include <iostream>

using namespace std;

int completare(int n){

int temp2;
int temp;
   do{
    temp2 = temp;
    temp = n;
    int cif_max=0;
     int copyen=n;
    while(copyen>0){if(copyen%10>cif_max)cif_max=copyen%10; copyen/=10;}

    int newn = 0;
    int p=1;
    while(n>0){newn = newn + (cif_max-n%10)*p; n/=10;p*=10;}
    //cout<<newn<<' ';
    n = newn;

    }while(n>9 && temp != n && n !=temp2);

    if(n<=9)return n;
    else return -1;

}

int main()
{
    int n;
    int k , cnt=0;
    int iMax=0;
    cin>>n;
    cin>>k;
    for(int i=1; i<=n; ++i){
        int x;
        cin>>x;
        if(completare(x)==k)++cnt;
        if(x%2==0 && x>iMax)iMax=x;
    }
    cout<<iMax<<'\n'<<cnt;

    return 0;
}
