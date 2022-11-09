#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A"){
    Coord3D point1 = {10, 20, 30};
    Coord3D point2 = {1, 2, 2};

    CHECK(length(&point1) == 37.4166);
    CHECK(length(&point2) == 3);
}

TEST_CASE("Task B") {
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};
	CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
}

TEST_CASE("Task C") {
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};
    
	move(&pos, &vel, 2.0);
	CHECK(pos.x == 2);
	CHECK(pos.y == -10);
	CHECK(pos.z == 100.4);
}
