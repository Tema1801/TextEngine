#include <iostream>
#include core/Engine.h


  


int main{
  API API;
  
  API.addObject("Player");
  API.addObject("Enemy");
  
  API.engine.mainWhile();
  
  return 0;
}
