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

Orientation Agent::getOrientation() {
    return *orientation;
}

void Agent::updateOrientation(std::vector<Agent*> agents) {
//Uses results of rules to update its orientation
    Orientation* newOrientation = alignWithNeighbours(agents);
    delete orientation;
    orientation = newOrientation;

}

void Agent::updatePosition() {
//Uses current position and orientation to update its position
    int x = orientation->getVelocity() * sin(orientation->getBearing());
    int y = orientation->getVelocity() * cos(orientation->getBearing());
    position->setX(position->getX() + x);
    position->setY(position->getY() + y);
 
    
}

Orientation* Agent::alignWithNeighbours(std::vector<Agent*> agents) {
    float velocity = orientation->getVelocity();
    std::vector<Agent*> neighbours;
    int radius = 10;
    int newBearingSum = 0;
    for (Agent* a : agents) {
        float distance = sqrt(pow((a->getPosition().getX()-position->getX()),2) + pow((a->getPosition().getY()-position->getY()),2)); 
        if (distance <= radius) {
            neighbours.push_back(a); 
        }
    }

    for (Agent* a : neighbours) {
	newBearingSum = a->getOrientation().getBearing();
    }

    int newBearing = newBearingSum/neighbours.size();
    return new Orientation(velocity, newBearing);

}
