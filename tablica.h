
#include <iostream>

using namespace std;

#ifndef TABLICA_H
#define TABLICA_H

class Tablica
{
    private:
     int w;
     int k;


    public:
    bool **tab;
    Tablica(int nw, int nk);
    ~Tablica();
    Tablica(const Tablica& re);
    Tablica& operator=(const Tablica & re);


friend class Silnik;
};

#endif
