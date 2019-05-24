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
    void attack(Object attacker, Object target);
    void move(Object object, int value);
    void command(Object object, int number);
    void enemyTactic(Object attacker, Object target);

  
};

#endif //SCRIPT_H
