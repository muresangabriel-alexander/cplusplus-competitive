#include <fstream>
#include <algorithm>
//#include <iostream>
#include <cstring>
using namespace std;
ifstream cin("anagrame1.in");
ofstream cout("anagrame1.out");

int n, a[20], used[20];
string word;


void afis()
{
    for(int i=1; i<=n; ++i)
    cout<<word[a[i]-1];
    cout<<'\n';
}

void backk(int k)
{
    if(k==n+1)afis();
    else
    {
        for(int i=1; i<=n; ++i)
            if(!used[i])
            {
                a[k]=i;
                used[i]=1;
                backk(k+1);
                used[i]=0;
            }

    }

}

int main()
{
    cin>>word;
    n=word.size();
    sort(word.begin(), word.end());


    backk(1);



}

