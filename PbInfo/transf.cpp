#include <iostream>

using namespace std;

int a[1001], b[1001] , a1_b2 , a2_b1 , k , h ;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];


    for(int i=1;i<=n;i++)
    {
       if(a[i]!=b[i])
       {
           if(a[i]==1 && b[i]==2)a1_b2++;
           else if(a[i]==2 && b[i]==1)a2_b1++;
       }
    }


    if(a1_b2==a2_b1) h=a2_b1;
    if(a1_b2>a2_b1) h=a1_b2;
    else h=a2_b1;
    cout<<h;
    return 0;
}
