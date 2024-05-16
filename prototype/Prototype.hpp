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
  
  Prototype* clone() override
  {
    return new ConcretePrototypeA();
  }
  std::string type() override
  {
    return "type A";
  }
};

class ConcretePrototypeB : public Prototype
{
public:
  ~ConcretePrototypeB() {}
  
  Prototype* clone() override
  {
    return new ConcretePrototypeB();
  }
  std::string type() override
  {
    return "type B";
  }
};

class Client
{
public:
  static void init();
  static void remove();
  static Prototype* make(const int index);

private:
  static Prototype* types[2];
  static int n_types;
};

#endif // PROTOTYPE_HPP
