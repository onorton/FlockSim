#ifndef AGENT_H
#define AGENT_H
#include "Orientation.h"
#include "Position.h"
#include <vector>

class Agent {
    Orientation* orientation;
    Position* position;
    //Flocking rules go here

public:
    Agent(Orientation* orientation, Position* position);
    ~Agent();
    Position getPosition();
    void updateOrientation(std::vector<Agent*> agents);
    void updatePosition();

};
#endif
