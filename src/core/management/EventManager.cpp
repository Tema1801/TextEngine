#include "EventManager.h"

EventManager::EventManager()
{

}

int checkEvents()
{
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::1))
  {
    return 1;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::2))
  {
    return 2;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::3))
  {
    return 3;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::4))
  {
    return 4;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
  {
    return 0;
  }
}
