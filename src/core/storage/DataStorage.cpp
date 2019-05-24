#include "DataStorage.h"
#include "../Engine.h"
#include "storage/Object.h"
#include <vector>

DataDtorage::DataDtorage()
{

}

DataDtorage::~DataDtorage()
{

}

void add_object(std::string objectName)
{
  Object new_object;
  objects.push_back(new_object);
}

int find_object(std::string objectName)
{
  int n;
  for (int i = 0; i < objects.size(); i++)
  {
    if (object[i].name == objectName)
    {
      n = i;
    }
  }
  return n;
}

void delete_object(std::string objectName)
{
  Object new_object;
  objects.push_back(new_object);
}
