#include <math.h>
#include "Agent.h"

Agent::Agent(Orientation* orientation, Position* position) {
    this->orientation = orientation;
    this->position = position;
}
Agent::~Agent() {
    delete orientation;
    delete position;
}

Position Agent::getPosition() {
    return *position;
}

void Agent::updateOrientation(std::vector<Agent*> agents) {
//Uses results of rules to update its orientation
}

void Agent::updatePosition() {
//Uses current position and orientation to update its position
    int x = orientation->getVelocity() * sin(orientation->getBearing());
    int y = orientation->getVelocity() * cos(orientation->getBearing());
    position->setX(position->getX() + x);
    position->setY(position->getY() + y);
 
    
}
