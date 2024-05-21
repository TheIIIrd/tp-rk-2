#include <iostream>
#include "../prototype/Prototype.cpp"
#include "../prototype/Client.cpp"

int main()
{
  Client::init();
  
  Prototype *prototype1 = Client::make( 0 );
  std::cout << "Prototype: " << prototype1->type() << std::endl;
  delete prototype1;
  
  Prototype *prototype2 = Client::make( 1 );
  std::cout << "Prototype: " << prototype2->type() << std::endl;
  delete prototype2;
  
  Client::remove();
  
  return 0;
}
