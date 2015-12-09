#ifndef AGENT_H
#define AGENT_H
#include "Orientation.h"
#include "Position.h"
#include <vector>

class Agent {
    Orientation* orientation;
    Position* position;
    //Flocking rules go here
    Orientation* alignWithNeighbours(std::vector<Agent*> agents);

public:
    Agent(Orientation* orientation, Position* position);
    ~Agent();
    Position getPosition();
    Orientation getOrientation();
    void updateOrientation(std::vector<Agent*> agents);
    void updatePosition();

};
#endif
