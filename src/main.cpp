#include "World.h"
#include "Agent.h"
#include <unistd.h>

#define INTERVAL 500000

int main() {
    
    //Create World and agents
    World world(50, 50, 10);

    //Main loop
    while(true) {
        world.updateAgents();
        world.drawWorld();
	usleep(INTERVAL);
    }
    
    return 0;
}



