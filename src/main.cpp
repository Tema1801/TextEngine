#include <iostream>
#include core/Engine.h


  


int main{
  API API;
  
  API.addObject("Player");
  API.addComponent("Player", "PlayerScript");
  API.addObject("Enemy");
  API.addComponent("Enemy", "EnemyScript");
  
  API.engine.mainWhile();
  
  return 0;
}
