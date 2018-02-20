#include <iostream>

using namespace std;

int main()
{
    int n, x, a, b, inti=0;
    cin>>x;
    while(x>0)
    {

        int a=1, b=1, s=0;
      //  if(x==1)cout<<1;
     //   else
            while(a+b<=x)
            {
                s=a+b;
                a=b;
                b=s;
            }
                cout<<b<<' ';
                x-=b;
            }


    return 0;
}
