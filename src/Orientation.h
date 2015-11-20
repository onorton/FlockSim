#ifndef ORIENTATION_H
#define ORIENTATION_H
class Orientation {
    float _velocity;
    float _bearing;
public:
    Orientation(float velocity, float bearing);
    float getVelocity();
    float getBearing();
};
#endif
