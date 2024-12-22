#include "Prototype.hpp"

Prototype* ConcretePrototypeA::clone()
{
  return new ConcretePrototypeA();
}

std::string ConcretePrototypeA::type()
{
  return "type A";
}

Prototype* ConcretePrototypeB::clone()
{
  return new ConcretePrototypeB();
}

std::string ConcretePrototypeB::type()
{
  return "type B";
}

