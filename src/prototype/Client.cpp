#include "Client.hpp"

Prototype* Client::types[2];
int Client::n_types = 2;

void Client::init()
{
  types[0] = new ConcretePrototypeA();
  types[1] = new ConcretePrototypeB();
}

void Client::remove()
{
  delete types[0];
  delete types[1];
}

Prototype* Client::make(const int index)
{
  if (index >= n_types)
  {
    return nullptr;
  }
  return types[index]->clone();
}
