#pragma once
#include"TRANSITION.h"
#include"COLOR.h"
class TRANSITION_FADE :
    public TRANSITION {
public:
    struct DATA {
        COLOR color;
        float speed = 0;
    };
private:
    DATA Transition;
public:
    TRANSITION_FADE(class GAME* game);
    void create();
    void inTriggerProc();
    bool inProc();
    void outTriggerProc();
    bool outProc();
};