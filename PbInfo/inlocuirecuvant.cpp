#include <fstream>
#include <cstring>
using namespace std;
ifstream cin("inlocuirecuvant.in");
ofstream cout("inlocuirecuvant.out");
char a[20], b[20];
char word[30];


int main()
{
    cin>>a>>b;
    bool beginn=1;
    while(!cin.eof()){
    cin>>word;
    if(!strcmp(a,word))cout<<b<<' ';
    else cout<<word<<' ';


    }
    return 0;
}
