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

void showData()
{
  std::cout << "Name " << name <<std::endl;
  std::cout << "Health " << health <<std::endl;
  std::cout << "Position "<< position << std::endl;
  std::cout << "Attack power "<< power << std::endl;
  std::cout << "Attack range "<< range << std::endl;
};
