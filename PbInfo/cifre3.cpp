#include <iostream>

using namespace std;

bool  cond_cifre3(int n){
int fr_cub[11], fr_patrat[11];
for(int i=0; i<=10; ++i){fr_cub[i]=0; fr_patrat[i]=0;}

int cub=n*n*n, patrat=n*n;
while(cub>0){++fr_cub[cub%10]; cub/=10;}
while(patrat>0){++fr_patrat[patrat%10]; patrat/=10;}

for(int i=0; i<=9; ++i){
    if(fr_cub[i]>0 && fr_patrat[i]>0)return 0;
}
return 1;
}

int main()
{
    int n;
    cin>>n;
    if(n==1)return 0;
    int i=2;
    while(i<=n){
        if(cond_cifre3(i))cout<<i<<' ';
        ++i;
    }
    return 0;
}
