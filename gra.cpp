#include "gra.h"

void Gra::View(){
     system("cls");
    for(int i=0;i<w;i++){
        for(int j=0;j<k;j++){
           cout<<tab->tab[i][j]<<" ";
        }
        cout<<endl;
    }
}

 void Gra::Play(){


       while(true){

         View();
        Analiza();
        sleep(1);
        if(isEmpty()){
            View();
            break;
        }

        }


}
