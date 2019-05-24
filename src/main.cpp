#include <iostream>
#include "core/Engine.h"
#include "core/api.h"


int main{
  API API;
  
  API.addObject("Player");
  datastorage->objects[API.findObject("Player")].startScripts();
  
  API.addObject("Enemy");
  datastorage->objects[API.findObject("Player")].startScripts();
  
  API.engine.mainWhile();
  
  return 0;
}
