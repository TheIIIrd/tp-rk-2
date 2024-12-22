#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Prototype.hpp"

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

#endif
