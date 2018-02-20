#include <iostream>

using namespace std;
int a[10];

void afis(int a[], int n){for(int i=1; i<=n; ++i)cout<<a[i]; cout<<'\n';}

int main()
{
    for(int i = 1 ; i <= 9 ; ++ i)
        for(int j = i + 1 ; j <= 9 ; ++ j)
            for(int k = j + 1 ; k <= 9 ; ++ k)
                for(int l = k + 1 ; l <= 9 ; ++ l)
                    for(int centru = l + 1 ; centru <= 9 ; ++ centru)
                        cout << i << j << k << l << centru << l << k << j << i << "\n";
    return 0;
}
