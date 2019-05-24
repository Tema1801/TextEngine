#include <iostream>
#include core/Engine.h



int main{
  API API;
  
  API.addObject("Player");
  datastorage->objects[API.findObject("Player")].startScripts();
  
  API.addObject("Enemy");
  datastorage->objects[API.findObject("Player")].startScripts();
  
  API.engine.mainWhile();
  
  return 0;
}
