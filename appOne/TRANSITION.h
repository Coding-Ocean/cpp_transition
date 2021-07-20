#pragma once
#pragma once
#include"GAME_OBJECT.h"
class TRANSITION :
    public GAME_OBJECT {
private:
    enum class STATE {
        IN_TRIGGER, IN_NOW, IN_END,
        OUT_TRIGGER, OUT_NOW, OUT_END
    };
    STATE State = STATE::OUT_END;
public:
    TRANSITION(class GAME* game);
    virtual ~TRANSITION();
    virtual void create()=0;
    virtual void inTriggerProc() = 0;
    virtual bool inProc() = 0;
    virtual void outTriggerProc() = 0;
    virtual bool outProc() = 0;
    void inTrigger();
    void outTrigger();
    void draw();
    bool inEndFlag();
    bool outEndFlag();
};
