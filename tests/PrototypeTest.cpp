#include <gtest/gtest.h>
#include "../prototype/Prototype.cpp"
#include "../prototype/Client.cpp"

TEST(testus, testus) {
    EXPECT_EQ(1, 1);
}

TEST(PrototypeTest, CloneTest) { 
    ConcretePrototypeA prototypeA; 
    ConcretePrototypeB prototypeB; 

    Prototype* clonedA = prototypeA.clone(); 
    Prototype* clonedB = prototypeB.clone(); 

    EXPECT_EQ(clonedA->type(), "type A"); 
    EXPECT_EQ(clonedB->type(), "type B"); 

    delete clonedA; 
    delete clonedB;
}

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

TEST(PrototypeTest, TypeChangeAfterClone) {
    ConcretePrototypeA prototypeA;

    Prototype* clonedA = prototypeA.clone();

    EXPECT_EQ(clonedA->type(), "type A");
    
    clonedA->type() = "changed type A";
    
    EXPECT_EQ(clonedA->type(), "changed type A");
    
    delete clonedA;
}
