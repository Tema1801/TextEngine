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
