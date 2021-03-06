#include "World.h"
#include <iostream>
#include <stdlib.h>    
World::World(int width, int height, int numAgents) {
  this->width = width;
  this->height = height;
  this->numAgents = numAgents;
  this->agents = createAgents();
}

World::~World() {
   for (Agent* a : agents) {
	delete a;
   }
}

void World::updateAgents() {
//Update orientations and then update positions
    for (Agent* a : agents) {
        a->updateOrientation(agents);
    }
   
    for (Agent* a : agents) {
        a->updatePosition();
    }
}

void World::drawWorld() {
//Draws the world including the agents
   std::cout << "Epoch: " << epoch << "\n";
   epoch++;
   for (int h = height-1; h >= 0; h--) {
       for (int w = 0; w < width; w++) {
           bool agent = false;
   	   for (Agent* a : agents) {
   	       if ((int)a->getPosition().getX() == w && (int)a->getPosition().getY() == h)
                   agent = true;
   	   }
             
	   if (agent) 
               std::cout << '@';
           else
               std::cout << ' ';
   	}
        std::cout << '\n';
       
   }


}

std::vector<Agent*> World::createAgents() {
    std::vector<Agent*> agents;

    for (int i = 0; i < numAgents; i++) {
	int x = rand() % width;
        int y = rand() % height;
        int bearing = rand() * 360;
        Position* position = new Position(x, y);
        Orientation* orientation = new Orientation(1, bearing);
        agents.push_back(new Agent(orientation, position));

    }
  

    return agents;  

}





