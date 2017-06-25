#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include "judgeDredd.h"
#include <cstdlib>


int stoi(std::string str)
{
   std::stringstream ss(str);
   int N;
   ss<<str;
   ss>>N;
   return N;
}

int main()
{
    int numOfGames;
    int maxTime;
    std::string input="0";
    JudgeDredd* judge;

    while(stoi(input)<1)
    {
        std::cout << "How much time per player?\n";
        std::cin >> input;
    }
    maxTime=stoi(input);

    while(input!="y" && input!="n")
    {
        std::cout << "Should P1 play as white? y/n \n";
        std::cin >> input;
    }
    if(input=="y")
        judge=new JudgeDredd(true, maxTime);
    else
        judge=new JudgeDredd(false, maxTime);

    while(stoi(input)<1)
    {
        std::cout << "How many games? \n";
        std::cin >> input;
    }
    numOfGames=stoi(input);

    while(numOfGames>0)
    {
        if(!judge->move())
            return 0;

        judge->resetBoard();
    }

    judge->printScore();

    return 0;

}

