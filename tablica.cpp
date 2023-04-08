#include "tablica.h"

Tablica::Tablica(int nw, int nk ){
    w=nw<1 ? 1 : nw;
    k=nk<1 ? 1 : nk;

    tab=new bool *[w];
    for(int i=0;i<w;i++){
        tab[i]=new bool[k];
    }

for(int i=0;i<w;i++)
{
        for(int j=0;j<k;j++){
            tab[i][j]=0;
        }
    }

}

Tablica::~Tablica(){
    if(tab){
        for(int i=0;i<w;i++){
            delete[]tab[i];
        }
        delete[]tab;
    }
}
