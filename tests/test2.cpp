#include "gtest/gtest.h"
#include "../prototype/Prototype.cpp"

TEST(PrototypeTest, DifferentObjectsTest) {
    ConcretePrototypeA prototypeA;
    ConcretePrototypeB prototypeB;

    Prototype* clonedA1 = prototypeA.clone();
    Prototype* clonedA2 = prototypeA.clone();

    Prototype* clonedB1 = prototypeB.clone();
    Prototype* clonedB2 = prototypeB.clone();

    // Проверяем, что клонированные объекты различны
    EXPECT_NE(clonedA1, clonedA2);
    EXPECT_NE(clonedB1, clonedB2);

    delete clonedA1;
    delete clonedA2;
    delete clonedB1;
    delete clonedB2;
}
