#include <fstream>

using namespace std;
ifstream cin("spectacole.in");
ofstream cout("spectacole.out");
struct spectacole {
int i;
int s;
};

    spectacole s[103];
    int n;
    int cnt=0;


void citire(){
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>s[i].i>>s[i].s;
}

void ordonare(){
spectacole aux;
    for(int i=1; i<=n; ++i)
    for(int j=i+1; j<=n; ++j){
        if(s[i].s > s[j].s){ aux=s[i]; s[i]=s[j]; s[j]=aux;}
    }
}

void rez(){
    ++cnt;
    int fin=s[1].s;
    for(int i=2; i<=n; ++i)
        if(s[i].i >= fin){++cnt; fin = s[i].s;}

}


int main()
{
    citire();
    ordonare();
    rez();
    cout<<cnt;
    return 0;
}
