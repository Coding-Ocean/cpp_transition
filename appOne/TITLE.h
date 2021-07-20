#pragma once
#include"SCENE.h"
class TITLE : public SCENE{
public:
    TITLE(class GAME* game);
    void init();
    void draw();
    void nextScene();
};
