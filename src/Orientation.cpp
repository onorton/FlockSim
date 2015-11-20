#include "Orientation.h"
Orientation::Orientation(float velocity, float bearing) {
    this->velocity = velocity;
    this->bearing = bearing;

}

float Orientation::getVelocity() {
    return velocity;
}

float Orientation::getBearing() {
    return bearing;
}


