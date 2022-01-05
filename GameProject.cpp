#include "Game.h"
#include<iostream>

using namespace sf; 
using namespace std;



int main()
{
    srand(time(0));
    Game game;
    while(game.isRunning())
    {
        game.update();
        game.render();
    }
    return 0;
}