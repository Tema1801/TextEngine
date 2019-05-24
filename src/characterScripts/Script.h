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
    void command(sf::Event event);
  
};

#endif //SCRIPT_H
