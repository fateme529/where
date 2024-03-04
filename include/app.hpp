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
    bool flag_Arrow2_destination = true;
    bool flag_Arrow_Back = true;
    bool flag_just_one = true;
    bool flag_window = true;
    bool flag_window2 = false;
    bool flag_000 = true;
    bool flag_001 = true;
    bool flag_002 = true;
    bool flag_003 = true;
    bool flag_004 = true;
    bool flag_005 = true;
    bool flag_006 = true;
    bool flag_007 = true;
    bool flag_008 = true;
    bool flag_009 = true;
    bool flag_010 = true;
    bool flag_011 = true;
    bool flag_012 = true;
    bool flag_013 = true;
    bool flag_014 = true;
    bool flag_015 = true;
    bool flag_016 = true;
    bool flag_017 = true;
    bool flag_018 = true;
    bool flag_019 = true;
    bool flag_020 = true;
    bool flag_021 = true;
    bool flag_022 = true;
    bool flag_023 = true;
    bool flag_024 = true;
    bool flag_025 = true;
    bool flag_026 = true;
    bool flag_027 = true;
    bool flag_028 = true;
    bool flag_029 = true;
    bool flag_030 = true;
    bool flag_031 = true;
    bool flag_032 = true;
    bool flag_033 = true;
    bool flag_034 = true;
    bool flag_035 = true;
    bool flag_036 = true;
    bool flag_037 = true;
    bool flag_038 = true;
    bool flag_039 = true;
    bool flag_040 = true;
    bool flag_041 = true;
    bool flag_042 = true;
    bool flag_043 = true;
    bool flag_044 = true;
    bool flag_045 = true;
    bool flag_046 = true;
    bool flag_047 = true;
    bool flag_048 = true;
    bool flag_049 = true;
    bool flag_050 = true;
    bool flag_051 = true;
    bool flag_052 = true;
    bool flag_053 = true;
    bool flag_054 = true;
    bool flag_055 = true;
    bool flag_056 = true;
    bool flag_057 = true;
    bool flag_058 = true;

    bool flag_0000 = true;
    bool flag_0001 = true;
    bool flag_0002 = true;
    bool flag_0003 = true;
    bool flag_0004 = true;
    bool flag_0005 = true;
    bool flag_0006 = true;
    bool flag_0007 = true;
    bool flag_0008 = true;
    bool flag_0009 = true;
    bool flag_0010 = true;
    bool flag_0011 = true;
    bool flag_0012 = true;
    bool flag_0013 = true;
    bool flag_0014 = true;
    bool flag_0015 = true;
    bool flag_0016 = true;
    bool flag_0017 = true;
    bool flag_0018 = true;
    bool flag_0019 = true;
    bool flag_0020 = true;
    bool flag_0021 = true;
    bool flag_0022 = true;
    bool flag_0023 = true;
    bool flag_0024 = true;
    bool flag_0025 = true;
    bool flag_0026 = true;
    bool flag_0027 = true;
    bool flag_0028 = true;
    bool flag_0029 = true;
    bool flag_0030 = true;
    bool flag_0031 = true;
    bool flag_0032 = true;
    bool flag_0033 = true;
    bool flag_0034 = true;
    bool flag_0035 = true;
    bool flag_0036 = true;
    bool flag_0037 = true;
    bool flag_0038 = true;
    bool flag_0039 = true;
    bool flag_0040 = true;
    bool flag_0041 = true;
    bool flag_0042 = true;
    bool flag_0043 = true;
    bool flag_0044 = true;
    bool flag_0045 = true;
    bool flag_0046 = true;
    bool flag_0047 = true;
    bool flag_0048 = true;
    bool flag_0049 = true;
    bool flag_0050 = true;
    bool flag_0051 = true;
    bool flag_0052 = true;
    bool flag_0053 = true;
    bool flag_0054 = true;
    bool flag_0055 = true;
    bool flag_0056 = true;
    bool flag_0057 = true;
    bool flag_0058 = true;

    bool type = true;
    bool destination = true;
    string originName, destinationName;
    string filename = "input.txt";
    Graph graph;
    void menu();

public:
    App();
    void window2();
    void window3();
};
