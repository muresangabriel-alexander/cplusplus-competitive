#include <cstring>
char voc[]={"AEIOUaeiou"};

int nr_vocale(char* probe) {

    if(probe[0]==0){return 0;}
    int n =  strlen( probe ) -1;

    if(strchr(voc,probe[n])){
            probe[n]=0;  return 1+nr_vocale(probe);}
    else {probe[n]=0; return nr_vocale(probe);}
}