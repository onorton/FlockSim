#ifndef WORLD_H
#define WORLD_H
#include <vector>
#include "Agent.h"

class World {
  int width;
  int height;
  int numAgents;
  int epoch = 1;
  std::vector<Agent*> agents;
  std::vector<Agent*> createAgents();

public:
  World(int width, int height, int numAgents);
  ~World();
  void updateAgents();
  void drawWorld();
};
#endif
