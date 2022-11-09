#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A"){
    Coord3D point1 = {10, 20, 30};
    Coord3D point2 = {10, 20, 30};

    CHECK(length(&point1) == 37.4166);
    CHECK(length(&point2) == 37.4166);
}