#include "World.h"
#include <iostream>
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
    for (Agent* a : agents) {
        a->updateOrientation();
    }
   
    for (Agent* a : agents) {
        a->updatePosition();
    }
}

void World::drawWorld() {
//Draws the world including the agents
   for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
   	    for (Agent* a : agents) {
   	    	if (a->getPosition.getX() == w && a->getPosition.getY())
   	    	    std::cout << '@';
   	    	else 
   	    	    std::cout << ' ';
   	    }	
   	}
   }

}





