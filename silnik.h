

#include "tablica.h"
#include <fstream>



#ifndef SILNIK_H
#define SILNIK_H

class Silnik
{   protected:
    int w;//
    int k;//
    Tablica *tab;//
    Tablica *temp;//

    public:
    Silnik(); //
    ~Silnik(){};//
    Silnik(const Silnik& re);//
    Silnik& operator=(const Silnik & re);//
    void Init(const char *plik);//
    void Analiza();//
    bool isEmpty();

    private:
    int CountAlive(int w1,int k1);//
    bool IsAlive(int ile,bool st);//
};

#endif
