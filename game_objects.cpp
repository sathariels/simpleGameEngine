
//
// Created by nithi on 12/22/2024.
//
#include "game_objects.h"

// Paddle Implementation
Paddle::Paddle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}

int Paddle::getX() const {
    return x;
}

int Paddle::getY() const {
    return y;
}

void Paddle::setY(int y) {
    this->y = y;
}

int Paddle::getWidth() const {
    return width;
}

int Paddle::getHeight() const {
    return height;
}

// Ball Implementation
Ball::Ball(int x, int y, int size, int velX, int velY) : x(x), y(y), size(size), velX(velX), velY(velY) {}

int Ball::getX() const {
    return x;
}

int Ball::getY() const {
    return y;
}

void Ball::setX(int x) {
    this->x = x;
}

void Ball::setY(int y) {
    this->y = y;
}

int Ball::getVelX() const {
    return velX;
}

int Ball::getVelY() const {
    return velY;
}

void Ball::setVelX(int velX) {
    this->velX = velX;
}

void Ball::setVelY(int velY) {
    this->velY = velY;
}

int Ball::getSize() const {
    return size;
}
