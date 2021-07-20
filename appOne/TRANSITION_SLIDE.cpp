#include"graphic.h"
#include"window.h"
#include"GAME.h"
#include "TRANSITION_SLIDE.h"
TRANSITION_SLIDE::TRANSITION_SLIDE(class GAME* game):
    TRANSITION(game){
}
void TRANSITION_SLIDE::create() {
    struct SHAPE_VERTEX v[4] = {
        0,height,
        width,0,
        width*3,0,
        width*2,height
    };
    Transition.idx = createShape(v, 4);
    Transition.color = COLOR(200, 200, 0, 255);
    Transition.vx = 3000;
}
void TRANSITION_SLIDE::inTriggerProc() {
    colorMode(RGB, 255);
    Transition.px = -width;
    fill(Transition.color);
    noStroke();
    shape(Transition.idx, Transition.px, 0);
}
bool TRANSITION_SLIDE::inProc() {
    fill(Transition.color);
    noStroke();
    shape(Transition.idx, Transition.px, 0);
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
    fill(Transition.color);
    noStroke();
    shape(Transition.idx, Transition.px, 0);
    if (Transition.px < -width) {
        Transition.px += Transition.vx * delta;
        return false;
    }
    return true;
}