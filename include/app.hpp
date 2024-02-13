#pragma once

#include "../include/game.hpp"

class App
{
private:
    sf::Clock clock;
    Game game;
    void menu();

public:
    App();
};
