#ifndef SCRIPT_H
#define SCRIPT_H

#include "../api.h"
#include "../core/storage/Script.h"


class enemyScript: public Script
{
  public:
    Script();
    ~Script();
    void startScripts();
    void repeatedScripts();
    
  
};

#endif //SCRIPT_H
