#include "gtest/gtest.h"
#include "../prototype/Prototype.cpp" 

TEST(PrototypeTest1, CloneTest) { 
	ConcretePrototypeA prototypeA; 
	ConcretePrototypeB prototypeB; 

	Prototype* clonedA = prototypeA.clone(); 
	Prototype* clonedB = prototypeB.clone(); 

	EXPECT_EQ(clonedA->type(), "type A"); 
	EXPECT_EQ(clonedB->type(), "type B"); 

	delete clonedA; 
	delete clonedB; 
}

TEST(PrototypeTest2, DifferentObjectsTest) {
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

TEST(PrototypeTest3, TypeChangeAfterClone) {
    // Создаем исходный объект типа ConcretePrototypeA
    ConcretePrototypeA prototypeA;

    // Клонируем объект
    Prototype* clonedA = prototypeA.clone();

    // Проверяем, что тип клонированного объекта изменился
    EXPECT_EQ(clonedA->type(), "type A");
    
    // Меняем тип клонированного объекта
    clonedA->type() = "changed type A";

    // Проверяем, что тип изменился
    EXPECT_EQ(clonedA->type(), "changed type A");

    // Удаляем клон
    delete clonedA;
}
