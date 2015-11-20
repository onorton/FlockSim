#ifndef AGENT_H
#define AGENT_H
#include "Orientation.h"
#include "Position.h"

class Agent {
    Orientation* orientation;
    Position* position;
public:
    Agent(Orientation* orientation, Position* position);
    void updateOrientation();
    void updatePosition();
    //Flocking rules also go here

};
#endif
