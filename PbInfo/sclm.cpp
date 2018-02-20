/* 
 * File:   main.cpp
 * Author: informatica
 *
 * Created on 13 February 2016, 11:52
 */

#include <iostream>
#include <fstream>
using namespace std;
ifstream in("sclm.in");
ofstream out("sclm.out");


int a[1005];
int best [1005];
int pos [1005];



int main(int argc, char** argv) {
    int n, m ;
    
   
    
    in>>n;
    
    for(int i=1; i<=n; ++i)in>>a[i];
    
    int i,j;
    best [n]=1;
    pos [n]=-1;
    int max = 1, p=n;
        
    for(i=n-1; i>=1; --i)
    {
        best [i]=1;
        pos [i]=-1;
        
        for(j=i+1; j<=n; ++j)
            if(a[i]<a[j] && best[i]<best[j]+1)
            {
                best [i]=best[j]+1;
                pos[i]=j;
                if(max<=best[i])max=best[i],p=i;
            }
        
    
    }
    
    out<<max<<'\n';
    i=p;
    
    while(i!=-1)
    {
        out<<i<<' ';
        i = pos[i];
        
    }            
    return 0;
}

