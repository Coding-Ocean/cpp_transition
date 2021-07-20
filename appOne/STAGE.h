#pragma once
#include "SCENE.h"
class STAGE : public SCENE{
public:
    STAGE(class GAME* game);
    void init();
    void draw();
    void nextScene();
};
