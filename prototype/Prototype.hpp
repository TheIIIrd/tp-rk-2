#ifndef PROTOTYPE_HPP
#define PROTOTYPE_HPP

#include <string>

class Prototype
{
public:
  virtual ~Prototype() {}
  
  virtual Prototype* clone() = 0;
  virtual std::string type() = 0;
};

class ConcretePrototypeA : public Prototype
{
public:
  ~ConcretePrototypeA() {}
  
  Prototype* clone();
  std::string type();
};

class ConcretePrototypeB : public Prototype
{
public:
  ~ConcretePrototypeB() {}
  
  Prototype* clone();
  std::string type();
};

#endif
