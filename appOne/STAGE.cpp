#include"window.h"
#include"graphic.h"
#include"input.h"
#include"GAME.h"
#include"TRANSITION.h"
#include"TITLE.h"
#include "STAGE.h"
STAGE::STAGE(class GAME* game) :SCENE(game) {
}
void STAGE::init() {
    game()->transition()->inTrigger();
}
void STAGE::draw(){
    clear(255,0,0);
    fill(255);
    print("Stage");
    game()->transition()->draw();
}
void STAGE::nextScene() {
    if (isTrigger(KEY_SPACE)) {
        game()->transition()->outTrigger();
    }
    if (game()->transition()->outEndFlag()) {
        game()->setCurScene(game()->title());
    }
}
