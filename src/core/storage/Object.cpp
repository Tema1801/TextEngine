#include "Object.h"
#include <iostream>

Object::Object()
{

}

Object::Object(std::string objName)
{
  name = objName;
}

Object::~Object()
{

}

void showData(std::string objName)
{
  std::cout << "Name " << object.name <<std::endl;
  std::cout << "Health " << object.health <<std::endl;
  std::cout << "Position "<< object.position << std::endl;
  std::cout << "Attack power "<< object.atk_power << std::endl;
  std::cout << "Attack range "<< object.atk_range << std::endl;
};
