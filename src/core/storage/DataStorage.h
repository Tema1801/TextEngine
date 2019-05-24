#ifndef DATASTORAGE_H
#define DATASTORAGE_H

#include "../Engine.h"
#include "storage/Object.h"
#include <vector>

class DataStorage
{
  public:
    DataDtorage();
    ~DataDtorage();
    std::Vector<Object> objects;
    void add_object(std::string objectName);
    void delete_object(std::string objectName);
    void find_object(std::string objectName);
};

#endif //DATASTORAGE_H
