#ifndef GRATXT_H
#define GRATXT_H



#include <iostream>
#include <unistd.h>
#include "gra.h"
using namespace std;


class GraTXT: public Gra{

    public:
    GraTXT(){};
    virtual ~GraTXT(){};
    GraTXT(const GraTXT& re);
    GraTXT& operator=(const GraTXT & re);
     virtual void View();



};

#endif
