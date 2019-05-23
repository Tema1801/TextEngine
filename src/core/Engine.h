#ifndef ENGINE_H
#define ENGINE_H
#include <string>
//include h files

class Engine
{
  void addObject();
  void deleteObject();
  void addComponentToObject(std::string objectName, std::string componentType);
};

#ENDIF //ENGINE_H
