#ifndef INFO_H
#define INFO_H

class Components;

clss Info
{
  public:
    std::string name;
    std::string role;
    std::Vector<std::string> actionsDescription;
    std::Vector<std::string> actions;
    int position;
    int health;
    int atk_power;
    int atk_range;
    int effect;
};


#endif //INFO_H
