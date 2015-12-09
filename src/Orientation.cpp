#include "Orientation.h"
Orientation::Orientation(float velocity, int bearing) {
    this->velocity = velocity;
    this->bearing = bearing;

}

float Orientation::getVelocity() {
    return velocity;
}

int Orientation::getBearing() {
    return bearing;
}


