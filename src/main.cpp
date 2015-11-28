#include "World.h"
#include "Agent.h"

int main() {
    
    //Create World and agents
    std::vector<Agent*> agents;
    World world(50, 50, agents);
    //Main loop
    while(true) {
        world.updateAgents();
        world.drawWorld();
    }
    
    return 0;
}



