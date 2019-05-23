#ifndef API_H
#define API_H
#include <string>
//include h files

class API
{
  API();
  Engine engine;
  void addObject();
  void deleteObject();
  void addComponent(std::string objectName, std::string componentType);
  void changeComponent(std::string objectName, std::string componentType, std::string componentName);
};

#ENDIF //API_H
