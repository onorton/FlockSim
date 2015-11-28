#ifndef AGENT_H
#define AGENT_H
#include "Orientation.h"
#include "Position.h"
#include <vector>

class Agent {
    Orientation* orientation;
    Position* position;
public:
    Agent(Orientation* orientation, Position* position);
    ~Agent();
    Position getPosition();
    void updateOrientation(std::vector<Agent*> agents);
    void updatePosition();
    //Flocking rules also go here

};
#endif
