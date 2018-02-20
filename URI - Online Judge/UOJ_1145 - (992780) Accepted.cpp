#include <iostream>
using namespace std;
int X, Y;
int main()
{
    int j = 0 ;
    cin >> X; cin >> Y ;
    while(Y > j)
    {
    for(int i = 1 ; i <= X ; ++ i)
     {
     {++ j;
     if(j <= Y && i < X)
         cout << j << " " ;
         else if(j <= Y && i == X)
         cout << j << "\n" ;
         else if(j > Y)
         {
        cout <<"\n";
        return 0 ; }
     }
      
     }
     
    }
    return 0;
}