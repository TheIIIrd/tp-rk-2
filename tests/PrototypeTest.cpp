#include <gtest/gtest.h>
#include "../prototype/Prototype.cpp"
#include "../prototype/Client.cpp"

// Тест на верность
TEST(testus, testus) {
    EXPECT_EQ(1, 1);
}

// Тест на храьрость
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

// Тест на прочность
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

// Тование ConcretePrototypeA
TEST(PrototypeTest, CloneA)
{
  ConcretePrototypeA a;
  Prototype* clonedA = a.clone();
  
  ASSERT_NE(clonedA, nullptr);
  ASSERT_EQ(clonedA->type(), "type A");
  delete clonedA;
}

// Тестирование ConcretePrototypeB
TEST(PrototypeTest, CloneB)
{
  ConcretePrototypeB b;
  Prototype* clonedB = b.clone();
  
  ASSERT_NE(clonedB, nullptr);
  ASSERT_EQ(clonedB->type(), "type B");
  delete clonedB;
}

// Тестирование Client
TEST(ClientTest, Make)
{
  Client::init();
  Prototype* madeObject = Client::make(0);
  
  ASSERT_NE(madeObject, nullptr);
  ASSERT_EQ(madeObject->type(), "type A");
  
  delete madeObject;
  Client::remove();
}

// Да
int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
