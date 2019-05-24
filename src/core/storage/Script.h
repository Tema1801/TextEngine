#ifndef SCRIPT_H
#define SCRIPT_H
//#include


class Script: public Object
{
  public:
    Script();
    ~Script();
    virtual void startScripts();
    virtual void repeatedScripts();
    void attack(std::string atkName, std::string tgtName);
    void move(std::string Name, int value);
    void command(std::string Name, sf::Event event);
    void enemyTactic(std::string atkName, std::string tgtName);

  
};

#endif //SCRIPT_H
