//
// Created by Martin Stelter on 18.11.15.
//

#include "ball.h"

Ball::setup (float x, float y, float s) {
    this->posX = x;
    this->posY = y;
    this->speed = s;

}

//-----------------------------------


void Ball::update() {
    this->posY += speed;

}

//-----------------------------------


void Ball::draw() {

}