#ifndef SCRIPT_H
#define SCRIPT_H

#include "../api.h"
//#include


class Script: public Object
{
  public:
    Script();
    ~Script();
    void attack(std::string atkName, std::string tgtName);
    void move(std::string Name, int value);
    void command(std::string Name, sf::Event event);
    void enemyTactic(std::string atkName, std::string tgtName)
  
};

#endif //SCRIPT_H
