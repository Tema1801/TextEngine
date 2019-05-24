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

  
};

#endif //SCRIPT_H
