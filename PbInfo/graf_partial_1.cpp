#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("graf_partial_1.in");
ofstream fout("graf_partial_1.out");

int n, a[101][101], x, y;
int g[101];
int minim = 0x3f3f3f3f, maxim = -1;
int fn;

int main()
{
    fin >> n;
    while( fin >> x >> y )
        a[x][y] = a[y][x] = 1;

    for( int i = 1; i <= n; ++i )
        for( int j = i + 1; j <= n; ++j )
            if( a[i][j] && a[j][i] )
                g[i]++, g[j]++, maxim = max(maxim, max(g[i], g[j]));


    for( int i = 1; i <= n; ++i )
        minim = min(minim, g[i]);

    for( int i = 1; i <= n; ++i )
        for( int j = i + 1; j <= n; ++j )
            if( a[i][j] && a[j][i] && ((g[i] == maxim && g[j] == minim) || (g[i] == minim && g[j] == maxim)))
                a[i][j] = a[j][i] = 0, fn++;


    fout << fn << '\n';
    for( int i = 1; i <= n; ++i )
    {
        for( int j = 1; j <= n; ++j )
            fout << a[i][j] << ' ';
        fout << '\n';
    }

    return 0;
}
