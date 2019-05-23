#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include <vector>
#include <string>


class Object
{
  public:
    Object();
    ~Object();
    std::Vector<std::string> components;
    std::string name;
    std::string role;
    std::Vector<std::string> actionsDescription;
    std::Vector<std::string> actions;
    int position;
    int health;
    int atk_power;
    int atk_range;
    int effect;
    
};
    
  



#endif //OBJECT_H
