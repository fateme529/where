#pragma once

#include "../include/game.hpp"
#include "../include/Vertex.hpp"
#include "../include/Graph.hpp"
#include "../include/Short_path.hpp"

class App
{
private:
    sf::Clock clock;
    bool flag = true;
    bool flag_w = true;
    bool flag_1_page = true; // vaghti zaman reste shod
    bool falg_user = true;
    bool flag_Arrow1 = true;
    bool flag_Arrow_Back = true;
    string originName, destinationName;
    string filename = "input.txt";
    Graph graph;
    void menu();

public:
    App();
};
