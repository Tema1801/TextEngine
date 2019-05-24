#ifndef API_H
#define API_H
#include <string>
//include h files

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

#ENDIF //API_H
