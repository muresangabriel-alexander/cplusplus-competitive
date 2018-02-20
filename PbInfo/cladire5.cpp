/* 
 * File:   main.cpp
 * Author: informatica
 *
 * Created on 13 February 2016, 11:52
 */

//#include <iostream>
#include <fstream>
using namespace std;
ifstream cin("cladire5.in");
ofstream cout("cladire5.out");


int a[250][250];


int main(int argc, char** argv) {
    int n, m , S;
    int mx, mn;
    
    cin>>n>>m>>S;
    
    for(int i=1; i<=n; ++i)
        for(int j=1;j<=m; ++j)cin>>a[i][j];
    
    for(int i=0; i<=n+1; ++i)a[i][0]=a[i][m+1]=999999;
    for(int i=0; i<=m+1; ++i)a[0][i]=a[n+1][i]=999999;
  
   /* for(int i=0; i<=n+1; i++)
    {
        for(int j=0; j<=m+1; j++)cout<<a[i][j]<<' ';
        cout<<'\n';
    }
    * 
    */
    for(int i=1; i<=n; ++i)
        for(int j=m; j>=1; --j)
            if(i==1 && j==m)continue;
            else if (a[i-1][j]>a[i][j+1])a[i][j]+=a[i][j+1];
            else a[i][j]+=a[i-1][j];
            
            cout<<S-a[n][1];
            
    return 0;
}

