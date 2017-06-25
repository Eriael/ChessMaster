#include <iostream>
#include <map>
#include <string>
#include <sstream>

#include "Player1.h"

/*
struct move
{
    bool special;
    std::pair<int, int> from;
    std::pair<int, int> to;
    char type;
};*/
JudgeDredd::Player1::Player1(bool amIWhite)
{
    x=-1;

    library[0].whiteMove=true;
    library[0].special=false;
    library[0].from={4, 6};
    library[0].to={4, 4};

    library[1].whiteMove=true;
    library[1].special=false;
    library[1].from={5, 6};
    library[1].to={5, 4};

    library[2].whiteMove=true;
    library[2].special=true;
    library[2].from={4, 4};
    library[2].to={3, 3};
    library[2].type='B';

    library[3].whiteMove=true;
    library[3].special=false;
    library[3].from={5, 7};
    library[3].to={2, 4};

    library[4].whiteMove=true;
    library[4].special=false;
    library[4].from={6, 7};
    library[4].to={4, 6};

    library[5].whiteMove=true;
    library[5].special=false;
    library[5].from={1, 7};
    library[5].to={2, 5};

    library[6].whiteMove=true;
    library[6].special=false;
    library[6].from={7, 6};
    library[6].to={7, 5};

    library[7].whiteMove=true;
    library[7].special=true;
    library[7].from={7, 5};
    library[7].to={6, 4};
    library[7].type='B';
}

JudgeDredd::Player1::~Player1()
{

}

move JudgeDredd::Player1::makeMove(struct move lastMove)
{
    x++;
    return library[x];
}
