//
// Created by Martin Stelter on 18.11.15.
//

#ifndef BOUNCYBALL_ANDROID_BALL_H
#define BOUNCYBALL_ANDROID_BALL_H

class Ball {
public:

    
    float posX;
    float posY;
    float speed;

    Ball (float posX, float posY, float speed);

    void update ();
    void draw ();

};




#endif //BOUNCYBALL_ANDROID_BALL_H
