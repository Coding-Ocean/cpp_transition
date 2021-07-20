#include"graphic.h"
#include"window.h"
#include"GAME.h"
#include "TRANSITION_SLIDE.h"
TRANSITION_SLIDE::TRANSITION_SLIDE(class GAME* game):
    TRANSITION(game){
}
void TRANSITION_SLIDE::create() {
    Transition.color = COLOR(0, 0, 0, 255);
    Transition.img = loadImage("assets\\rect.png");
    Transition.vx = 3000;
}
void TRANSITION_SLIDE::inTriggerProc() {
    rectMode(CORNER);
    colorMode(RGB, 255);
    Transition.px = -width;
    imageColor(Transition.color);
    image(Transition.img, Transition.px, 0);
}
bool TRANSITION_SLIDE::inProc() {
    imageColor(Transition.color);
    image(Transition.img, Transition.px, 0);
    if (Transition.px < width) {
        Transition.px += Transition.vx * delta;
        return false;
    }
    return true;
}
void TRANSITION_SLIDE::outTriggerProc() {
    Transition.px = -width * 3;
}
bool TRANSITION_SLIDE::outProc() {
    imageColor(Transition.color);
    image(Transition.img, Transition.px, 0);
    if (Transition.px < -width) {
        Transition.px += Transition.vx * delta;
        return false;
    }
    return true;
}