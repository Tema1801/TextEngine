#include Engine.h

Engine::Engine()
{

};

void Engine::addObject()
{
  engine.dataStorage->add_object();
};

void Engine::deleteObject()
{
  engine.dataStorage->delete_object();
};

void Engine::addComponentToObject(std::string objectName, std::string componentType)
{
  
};
