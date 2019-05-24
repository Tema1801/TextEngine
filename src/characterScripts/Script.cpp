#include "Script.h"
#include "../core/api.h"

API API;

Script::Script()
{
  
}

Script::~Script()
{
  
}

void attack(std::string atkName, std::string tgtName)
{
  int distance = abs(API.getPosition(atkName) - API.getPosition(tgtName));
  if (distance <= API.getRange(atkName))
  {
    API.setHealth(tgtName, API.getHealth(tgtName) - API.getPower(atkName));
  }
}

void move(std::string Name, int value)
{
  API.setPosition(std::string objectName, value)
}

void command(std::string Name, sf::Event event)
{
  
}
