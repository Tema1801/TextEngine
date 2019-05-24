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
  position = 5;
  power = 1;
  range = 1;
}
void repeatedScripts()
{
  tactic(objects[API.findObject("Player")]);
}
