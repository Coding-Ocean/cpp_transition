#include"framework.h"
#include"graphic.h"
#include"window.h"
#include"TITLE.h"
#include"STAGE.h"
#include"TRANSITION.h"
#include"GAME.h"
GAME::GAME() {
    Title = new TITLE(this);
    Stage = new STAGE(this);
    Transition = new TRANSITION(this);
}
GAME::~GAME() {
    delete Transition;
    delete Stage;
    delete Title;
}
void GAME::run() {
    window(1280, 720);
    hideCursor();
    
    Title->create();
    Stage->create();
    Transition->create();
    
    CurScene = Title;
    CurScene->init();
    initDeltaTime();
    while (notQuit) {
        setDeltaTime();
        CurScene->proc();
    }
}
void GAME::setCurScene(class SCENE* scene) { 
    CurScene = scene;
    CurScene->init();
}

