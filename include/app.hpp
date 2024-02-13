#pragma once

#include "../include/game.hpp"

class App
{
private:
    sf::Clock clock;
    bool flag = true;
    Game game;
    void menu();

public:
    App();
};
