#ifndef ENGINE_H
#define ENGINE_H

//#include

//class ;

class Engine:
{
  Engine();
  ~Engine();
  DataStorage* dataStorage;
  EventManager* eventManager;
  void showActions();
  void mainWhile();
  
}

#endif //ENGINE_H
