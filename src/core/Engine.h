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
  void mainWhile();
  void showActions();
  
}

#endif //ENGINE_H
