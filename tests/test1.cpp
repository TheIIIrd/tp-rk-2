#include "gtest/gtest.h"
#include "prototype/Prototype.cpp" 

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
