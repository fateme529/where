#pragma once

#include "../include/game.hpp"

class App
{
private:
    sf::Clock clock;
    bool flag = true;
    bool flag_w = true;
    bool flag_1_page =true; // vaghti zaman reste shod
    bool falg_user = true;
    Game game;
    void menu();

public:
    App();
};
