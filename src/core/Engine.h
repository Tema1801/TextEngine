#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>

#include "storage/Script.h"
#include "storage/Object.h"
#include "storage/DataStorage.h"
#include "management/EventManager.h"


class Engine
{
  Engine();
  ~Engine();
  DataStorage* dataStorage;
  EventManager* eventManager;
  void showActions();
  void mainWhile();
  
};

#endif //ENGINE_H
