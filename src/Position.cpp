#include "Position.h"
Position::Position(float x, float y) {
   this->x = x;
   this->y = y;
}

float Position::getX() {
    return x;
}

void Position::setX(float x) {
    this->x = x;
}

float Position::getY() {
    return y;
}

void Position::setY(float y) {
    this->y = y;
}
