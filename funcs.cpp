#include <iostream>
#include <cmath>
#include "funcs.h"

// add functions here

double length(Coord3D *p){
    return sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2));
}