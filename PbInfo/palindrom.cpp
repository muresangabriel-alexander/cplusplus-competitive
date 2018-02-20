#include <fstream>
#include <cstring>
using namespace std;
ifstream cin("palindrom.in");
ofstream cout("palindrom.out");
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string word;
        cin>>word;
        int ss=word.size();
        bool ok=1;
      //  cout<<ss<<'\n';
        for(int i=0; i<ss/2; ++i)if(word[i]!=word[ss-i-1]){ok=0; break;}
        cout<<ok<<'\n';
            //cout<<word[i]<<' '<<word[ss-i-1]<<'\n';
    }
    return 0;
}
