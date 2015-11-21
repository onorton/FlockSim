#ifndef WORLD_H
#define WORLD_H
#include <vector>
#include "Agent.h"

class World {
  int width;
  int height;
  std::vector<Agent*> agents;

public:
  World(int width, int height, std::vector<Agent*> agents);
  ~World();
  void updateAgents();
  void drawWorld();
};
#endif
