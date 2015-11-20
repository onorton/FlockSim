#include "Orientation.h"
Orientation::Orientation(float velocity, float bearing) {
    _velocity = velocity;
    _bearing = bearing;

}

float Orientation::getVelocity() {
    return velocity;
}

float Orientation::getBearing() {
    return bearing;
}


