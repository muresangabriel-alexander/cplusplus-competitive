#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char satz[300];
char et[40],k;
char word[40], ett[40];
  int nn;

void getEt(int &n)
{for(n++; satz[n]; ++n)et[k++]=satz[n];}

bool getWordenCheck(int &b)
{
    memset(word,0,40);
    memset(ett,0,40);
    int g=0;
    for(; satz[b]!=' ' && b<=nn; ++b)word[g++]=satz[b];
    strcpy(ett,et);

 //   cout<<ett<<'\n'<<et<<'\n'<<word<<'\n';
    if(strcmp(word,et))
    {
        sort(ett,ett+strlen(ett));
        sort(word,word+strlen(word));
        if(!strcmp(word,ett))return 1;
    }
  //  cout<<word<<'\n';
    return 0;


}



int main()
{
    cin.getline(satz,300);
    int n=strlen(satz);
    nn=n;
    while(satz[n]!=' ')--n;
    getEt(n);

    int x=0, cnt=0;
    while (x<=  nn)
    {
        while(satz[x]==' ' && x<=nn )x++;
        if(getWordenCheck(x))++cnt;
    //    cout<<'\n'<<cnt<<' '<<x<<' '<<nn<<'\n';

    }
    cout<<cnt;
    return 0;
}
