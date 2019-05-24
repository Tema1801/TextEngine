#include "engine.h"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>


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
    for (i = 0; i < dataStorage->objects.size(); i++)   //typing characters' stats
    {
      dataStorage->objects[i].showData();
    }

    showActions();  // insrtuctions for player
    Sleep(5);
    for (i = 0; i < dataStorage->objects.size(); i++)   //characters doing actions possible by scripts
    {
      dataStorage->objects[i].repeatedScripts();
    }
    Sleep(5);
    
  }
}
