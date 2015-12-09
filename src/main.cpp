#include "World.h"
#include "Agent.h"
#include <unistd.h>

int main() {
    
    //Create World and agents
    World world(50, 50, 10);

    //Main loop
    while(true) {
        world.updateAgents();
        world.drawWorld();
	usleep(500000);
    }
    
    return 0;
}



