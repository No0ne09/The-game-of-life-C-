#include "silnik.h"


Silnik::Silnik():w(0),k(0)
{

    Init("run.txt");

}

void Silnik::Init(const char *plik)
{
    int nw=0;
    int nk=0;
    ifstream infile(plik);
        infile>>w;
        infile>>k;

        tab=new Tablica(w,k);
        temp=new Tablica(w,k);

        while(infile.good()){

            infile>>nw;
            infile>>nk;
            tab->tab[nw-1][nk-1]=1;
        }



        infile.close();


}

void Silnik::Analiza(){
int ile=0;
bool test;


for(int i=0;i<w;i++)
{
    for(int j=0;j<k;j++)
    {

        ile=CountAlive(i,j);


        test=IsAlive(ile,tab->tab[i][j]);

        temp->tab[i][j]=test;



    }
}

for(int i=0;i<w;i++)
{
    for(int j=0;j<k;j++)
    {
       tab->tab[i][j]=temp->tab[i][j];
    }
}


}

bool Silnik::IsAlive(int ile,bool st)
{

if(ile==3){return 1;}

if(ile==2&&st==1)
{
    return 1;
}

else{return 0;}

}


int Silnik::CountAlive(int w1,int k1){
     int licznik = 0;
        if (w1 > 0 && k1 > 0 && tab->tab[w1-1][k1-1]) licznik++;
        if (w1 > 0 && tab->tab[w1-1][k1]) licznik++;
        if (w1 > 0 && k1 < k-1 && tab->tab[w1-1][k1+1]) licznik++;
        if (k1 > 0 && tab->tab[w1][k1-1]) licznik++;
        if (k1 < k-1 && tab->tab[w1][k1+1]) licznik++;
        if (w1 < w-1 && k1 > 0 && tab->tab[w1+1][k1-1]) licznik++;
        if (w1 < w-1 && tab->tab[w1+1][k1]) licznik++;
        if (w1 < w-1 && k1 < k-1 && tab->tab[w1+1][k1+1]) licznik++;

    return licznik;

}

bool Silnik::isEmpty(){
    int ile=0;
    for(int i=0;i<w;i++){
        for(int j=0;j<k;j++){
            if(tab->tab[i][j]==1){
                ile++;
            }
        }
    }
    if(ile==0){
        return 1;

    }
    else{return 0;}

}
