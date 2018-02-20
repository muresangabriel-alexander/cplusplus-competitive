#include <iostream>

using namespace std;

inline long long oglindit(long long a)
{
    long long ogl = 0;
    while(a)
        ogl = ogl * 10 + a % 10, a /= 10;
    return ogl;
}

inline bool palindrom(long long a)
{
    return a == oglindit(a);
}

inline long long nrc(long long a)
{
    long long nr = 0;
    do
    {
        nr++;
        a /= 10;
    }
    while(a);
    return nr;
}

inline long long p10(long long x)
{
    long long p = 1;
    for( ; x; --x )
        p *= 10;
    return p;
}

inline bool concat(long long a, long long b)
{
    long long nra = nrc(a), nrb = nrc(b);
    if( palindrom(a * p10(nrb) + b) )
        return 1;
    if( palindrom(b * p10(nra) + a) )
        return 1;
    return 0;
}

int main()
{
    long long a, b, cnt = 0;
    cin >> a >> b;
    while( a && b )
    {
        if( concat(a, b) )
            cnt++;
        cin >> a >> b;
    }
    cout << cnt;
    return 0;
}
