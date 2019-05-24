#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H
#include "SFML/Graphics.hpp"

class EventManager:
{
  EventManager();
  sf::Event event;
  int checkEvents();
}

#endif //EVENTMANAGER_H
