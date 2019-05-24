#include "engine.h"
#include <iostream>
#include <fstream>
#include <string>


Engine::Engine()
{

}

Engine::~Engine()
{

}

void showActions()
{
  std::string output;
  std::ifstream file;
  file.open("../file.txt");
  while(file >> output)
  {
    std::cout << output << endl;
  }
  file.close();
  
}


void Engine::mainWhile()
{
  bool game_state = true;
  while(game_state)
  {
    
    dataStorage.showData("Player");
    dataStorage.showData("Enemy");
    showActions();
    //updating stats
    

  }
}
