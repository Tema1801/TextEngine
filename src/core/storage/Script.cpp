#include "Script.h"
#include "../api.h"



Script::Script()
{
  
}

Script::~Script()
{
  
}

void attack(Object target)
{
  int distance = abs(object.position - target.position);
  if (distance <= object.range)
  {
    target.health -= object.power;
  }
}

void move(int value)
{
  object.position = value;
}



void tactic(Object player)
{
  int distance = abs(object.position - player.position);
  if ((object.range <= distance) && (object.health > 3))
  {
    object->attack(player);
  }
  else if ((object.range > distance) && (object.health > 3))
  {
    if (object.position > player.position)
    {
      object->move(-1);
    }
    else
    {
      object->move(1);
    }
  }
  else if (object.health < 3)
  {
    if (object.position > player.position)
    {
      object->move(1);
    }
    else
    {
      object->move(-1);
    }
  }
}
