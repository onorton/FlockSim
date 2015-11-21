#include "World.h"
World::World(int width, int height, std::vector<Agent*> agents) {
  this->width = width;
  this->height = height;
  this->agents = agents;
}

World::~World() {
   for (Agent* a : agents) {
		delete a;
   }
}

void World::updateAgents() {
//Update orientations and then update positions

}

void World::drawWorld() {
//Draws the world including the agents
}





