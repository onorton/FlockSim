#include "World.h"
#include "Agent.h"

int main() {
    
    //Create World and agents
    World world(50, 50, 10);

    //Main loop
    while(true) {
        world.updateAgents();
        world.drawWorld();
        sleep(1);
    }
    
    return 0;
}



