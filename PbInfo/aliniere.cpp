#include <iostream>

using namespace std;
int B[102], F[102], b_pos[102], f_pos[102];

int main()
{
    int n, height, b=0, f=0 , x;
    char sex;

    cin>>n;

    for(int i =1 ; i<=n; ++i){
         cin>>sex>>x;

         if( sex == 'B' )
            {B[++b] = x; b_pos[b] = i; }
        else
            F[++f] = x, f_pos[f] = i;
    }

    for(int i=1; i<=b; i++)
        for(int j=1; j<=b-i; j++)
        {
            if(B[j]<B[j+1])
            {swap(B[j], B[j+1]);
              swap(b_pos[j], b_pos[j+1]);}

            if(B[j]==B[j+1] && b_pos[j]>b_pos[j+1]) swap(b_pos[j], b_pos[j+1]);
            }

    for(int i=1; i<=f; i++)
        for(int j=1; j<=f-i; j++)
        {
            if(F[j]<F[j+1])
            {swap(F[j], F[j+1]);
              swap(f_pos[j], f_pos[j+1]);}

            if(F[j]==F[j+1] && f_pos[j]>f_pos[j+1]) swap(f_pos[j], f_pos[j+1]);
            }

for(int i = 1; i<=b; ++i) {cout<<b_pos[i]<<' ';}
for(int i = 1; i<=f; ++i) {cout<<f_pos[i]<<' ';}


    return 0;
}
