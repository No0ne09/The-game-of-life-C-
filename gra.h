
#ifndef GRA_H
#define GRA_H

#include <iostream>
#include <unistd.h>
#include "silnik.h"


using namespace std;


    class Gra:public Silnik {

    public:
    Gra(){};
     ~Gra(){};
    Gra(const Gra& re);
    Gra& operator=(const Gra & re);
     void View();
     void Play();


};

#endif
