#include "gratxt.h"


void GraTXT::View(){
     system("cls");
    for(int i=0;i<w;i++){
        for(int j=0;j<k;j++){
           cout<<tab->tab[i][j]<<" ";
        }
        cout<<endl;
    }
}


