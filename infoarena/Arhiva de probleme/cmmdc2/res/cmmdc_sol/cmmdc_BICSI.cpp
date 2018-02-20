#include <iostream>
#include <fstream>

using namespace std;

const int MAXN = 2e6;

int Freq[MAXN], FreqFact[MAXN];

int main() {
    ifstream fin("cmmdc2.in");
    ofstream fout("cmmdc2.out");

    int n, val, k, maxx = 0;

    fin >> n >> k;
    for(int i = 1; i <= n; ++i) {
        fin >> val;
        Freq[val] += 1;
        maxx = max(maxx, val);
    }

    for(int i = 1; i <= maxx; ++i)
        for(int j = i; j <= maxx; j += i) {
            FreqFact[i] += Freq[j];
        }

    for(int i = maxx; i; --i) {
        if(FreqFact[i] >= k) {
            fout << i << endl;

            for(int j = maxx / i * i; j; j -= i) {
                while(Freq[j] > 0) {
                    fout << j << " ";
                    if(--k == 0)
                        return 0;
                    --Freq[j];
                }
            }
        }
    }



    return 0;
}
