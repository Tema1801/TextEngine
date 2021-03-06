#ifndef API_H
#define API_H
#include <string>

#include "storage/Script.h"
#include "storage/Object.h"
#include "storage/DataStorage.h"
#include "Engine.h"



class API
{
  API();
  Engine engine;
  void addObject(std::string objectName);
  void deleteObject(std::string objectName);
  int findObject(std::string objectName);
  int getPosition(std::string objectName);
  void setPosition(std::string objectName, int value);
  int getHealth(std::string objectName);
  void setHealth(std::string objectName, int value);
  int getPower(std::string objectName);
  int getRange(std::string objectName);
};

#endif //API_H
