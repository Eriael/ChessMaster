#ifndef PLAYER1_H_INCLUDED
#define PLAYER1_H_INCLUDED

#include "judgeDredd.h"

class JudgeDredd::Player1
{
    int x;
    struct move library[8];//only works when P1 is white, when P2 is white can be used to simulate bad moves

    public:
    Player1(bool amIWhite);
    ~Player1();
    struct move makeMove(struct move lastMove);
};

#endif // PLAYER1_H_INCLUDED
