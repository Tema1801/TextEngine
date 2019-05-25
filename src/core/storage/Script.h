#ifndef SCRIPT_H
#define SCRIPT_H
//#include
class Object;

class Script: public Object
{
  public:
    Script();
    ~Script();
    virtual void startScripts();
    virtual void repeatedScripts();
    void attack(Object target);
    void move(int value);
    void tactic(Object player);

  
};

#endif //SCRIPT_H
