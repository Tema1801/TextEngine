#include api.h

API::API()
{

}

void API::addObject()
{
  engine.dataStorage->add_object();
}

void API::deleteObject()
{
  engine.dataStorage->delete_object();
}

void API::addComponent(std::string objectName, std::string componentType)
{
  if (componentType == "Script")
  {
    engine.datastorage->object[objectName].components.push_back(new Script)
  }
  if (componentType == "Info")
  {
    engine.datastorage->object[objectName].components.push_back(new Info)
  }
}

void API::changeComponent(std::string objectName, std::string componentType, std::string componentName)
{
  if (componentType == "Script")
  {
    engine.datastorage->object[objectName].components.erase(std::remove(vec.begin(), vec.end(), componentName), vec.end())
    engine.datastorage->object[objectName].components.push_back(new Script)
  }
  if (componentType == "Info")
  {
    engine.datastorage->object[objectName].components.erase(std::remove(vec.begin(), vec.end(), componentName), vec.end())
    engine.datastorage->object[objectName].components.push_back(new Info)
  }
}
