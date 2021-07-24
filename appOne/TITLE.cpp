#include"graphic.h"
#include"input.h"
#include"GAME.h"
#include"STAGE.h"
#include"TRANSITION.h"
#include "TITLE.h"
TITLE::TITLE(class GAME* game) 
    :SCENE(game) {
}
void TITLE::init() {
    game()->transition()->inTrigger();
}
void TITLE::draw() {
    clear(0, 0, 255);
    fill(255);
    printSize(width / 5 * 2);
    print("Title");
    game()->transition()->draw();
}
void TITLE::nextScene() {
    if (isTrigger(KEY_SPACE)) {
        game()->transition()->outTrigger();
    }
    if (game()->transition()->outEndFlag()) {
        game()->setCurScene(game()->stage());
    }
}
