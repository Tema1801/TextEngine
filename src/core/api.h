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
};

#ENDIF //API_H
