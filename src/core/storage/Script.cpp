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
  int distance = abs(position - target.position);
  if (distance <= range)
  {
    target.health -= power;
  }
}

void move(int value)
{
  position += value;
}



void tactic(Object player)
{
  int distance = abs(position - player.position);
  if ((range <= distance) && (health > 3))
  {
    attack(player);
  }
  else if ((range > distance) && (health > 3))
  {
    if (position > player.position)
    {
      move(-1);
    }
    else
    {
      move(1);
    }
  }
  else if (health < 3)
  {
    if (position < player.position)
    {
      move(1);
    }
    else
    {
      move(-1);
    }
  }
}
