#include api.h

API::API()
{

}

void API::addObject(std::string objectName)
{
  engine.dataStorage->add_object(objectName);
}

void API::deleteObject(std::string objectName)
{
  engine.dataStorage->delete_object(objectName);
}

int API::findObject(std::string objectName)
{
  return engine.dataStorage->find_object(objectName);
}

int getPosition(std::string objectName)
{
  object num = engine.dataStorage->find_object(objectName);
  return engine.dataStorage->objects[num].position;
}

int setPosition(std::string objectName, int value)
{
  object num = engine.dataStorage->find_object(objectName);
  engine.dataStorage->objects[num].position = value;
}

int getHealth(std::string objectName)
{
  object num = engine.dataStorage->find_object(objectName);
  return engine.dataStorage->objects[num].health;
}

int setHealth(std::string objectName, int value)
{
  object num = engine.dataStorage->find_object(objectName);
  engine.dataStorage->objects[num].health = value;
}

int getPower(std::string objectName)
{
  object num = engine.dataStorage->find_object(objectName);
  return engine.dataStorage->objects[num].power;
}


int getRange(std::string objectName)
{
  object num = engine.dataStorage->find_object(objectName);
  return engine.dataStorage->objects[num].range;
}

