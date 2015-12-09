#ifndef ORIENTATION_H
#define ORIENTATION_H
class Orientation {
    float velocity;
    int bearing;
public:
    Orientation(float velocity, int bearing);
    float getVelocity();
    int getBearing();
};
#endif
