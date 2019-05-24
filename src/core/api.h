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
  int getStat(std::string objectName, std::string statName);
  void setstat(std::string objectName, std::string statName, int value);
};

#ENDIF //API_H
