#include "Script.h"
#include "../core/api.h"

API API;

Script::Script()
{
  
}

Script::~Script()
{
  
}

void startScripts()
{
  health = 10;
  position = 0;
  power = 2;
  range = 2;
}
void repeatedScripts()
{
  int n = engine->eventnager.checkEvents();
  
  if (n == 1)
  {
    position += 0;
  }
  else if (n == 2)
  {
    position -= 0;
  }
  else if (n == 3)
  {
    attack(objects[API.findObject("Enemy")]);;
  }
}
