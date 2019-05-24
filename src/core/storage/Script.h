#ifndef SCRIPT_H
#define SCRIPT_H
//#include

class Components;

class Script:
{
  public:
    Script();
    ~Script();
    void attack(std::string atkName, std::string tgtName);
    void command(sf::Event event);
  
};

#endif //SCRIPT_H
