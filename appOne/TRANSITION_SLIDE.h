#pragma once
#include"TRANSITION.h"
#include"COLOR.h"
class TRANSITION_SLIDE :
    public TRANSITION {
public:
    struct DATA {
        COLOR color;
        int img = 0;
        float px = 0;
        float vx = 0;
    };
private:
    DATA Transition;
public:
    TRANSITION_SLIDE(class GAME* game);
    void create();
    void inTriggerProc();
    bool inProc();
    void outTriggerProc();
    bool outProc();
};