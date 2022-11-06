#include <iostream>
#include <cmath>
#include "funcs.h"

// add functions here

double length(Coord3D *p){
    return sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2));
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    return length(p1) > length(p2) ? p1 : p2;
}