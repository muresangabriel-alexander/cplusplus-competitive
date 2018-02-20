#include <fstream>

using namespace std;

ifstream fin("spirala.in");
ofstream fout("spirala.out");

int main()
{
    int A[24][24];
    int n;
    fin >> n;
    for( int i = 1; i <= n; ++i )
        for( int j = 1; j <= n; ++j )
            fin >> A[i][j];

    int l = 1, c = 1, i;

    while(n)
    {
        for( i = c; i < n; ++i )
            fout << A[l][i] << " ";
        for( i = l; i <= n; ++i )
            fout << A[i][n] << " ";
        for( i = n - 1; i >= c; --i )
            fout << A[n][i] << " ";
        for( i = n - 1; i >= l + 1; --i )
            fout << A[i][c] << " ";

        n--;
        l++, c++;
    }



    return 0;
}
