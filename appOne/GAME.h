#pragma once
class GAME {
//ÉVÅ[Éì
private:
    class TITLE* Title = nullptr;
    class STAGE* Stage = nullptr;
    class SCENE* CurScene = nullptr;
    class TRANSITION* Transition = nullptr;
public:
    class TITLE* title() { return Title; }
    class STAGE* stage() { return Stage; }
    class TRANSITION* transition() { return Transition; }
    void setCurScene(class SCENE* scene);
//ÉQÅ[ÉÄ
public:
    GAME();
    ~GAME();
    void run();
};