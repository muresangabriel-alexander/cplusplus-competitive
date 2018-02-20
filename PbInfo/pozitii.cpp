#include <iostream>
#include <cstring>

using namespace std;

const char VOC[] = "aeiou";
const char CONS[] = "bcdfghjklmnpqrstvwxyz";
char A[256];

int main()
{
    cin.getline(A, 256);
    int l = strlen(A);
    int cnt = 0;
    for( int i = 1; i < l - 1; ++i )
    {
        if( strchr(VOC, A[i]) )
        {
            if( strchr(CONS, A[i - 1]) && strchr(CONS, A[i + 1]) )
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}
