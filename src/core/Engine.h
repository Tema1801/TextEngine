#ifndef ENGINE_H
#define ENGINE_H

//#include

//class ;

class Engine:
{
  Engine();
  ~Engine();
  DataStorage* dataStorage;
  LogicManager* logicManager;
  void showActions();
  void mainWhile();
  
}

#endif //ENGINE_H
