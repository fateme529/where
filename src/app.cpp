#include "../include/app.hpp"

// -------------------------------------------------------
App::App()
{
    menu();
}
// -------------------------------------------------------
void App::menu()
{

    sf::RenderWindow window(sf::VideoMode(x_SIZE, y_SIZE), "where");
    window.setFramerateLimit(60);

    sf::Texture texture;
    sf::Texture pag_2;
    sf::Texture help;
    sf::Texture welcome;
    sf::Texture user;
    sf::Texture back_grand;
    sf::Texture Back_icon;
    sf::Texture Lets_go_icon;
    sf::Texture help_icon;
    sf::Texture exit_icon;
    sf::Texture next_icon;
    sf::Texture Arrow_icon;
    sf::Texture Arrow2_icon;
    sf::Texture Aghdasiyeh_icon;
    sf::Texture Allameh_icon;
    sf::Texture Azadeghan_icon;
    sf::Texture Bimeh_icon;
    sf::Texture Boostan_icon;
    sf::Texture chahar_icon;

    try
    {
        texture.loadFromFile("picture/01.png");
        pag_2.loadFromFile("picture/02.png");
        help.loadFromFile("picture/03_help.png");
        welcome.loadFromFile("picture/04.png");
        user.loadFromFile("picture/6.png");
        back_grand.loadFromFile("picture/back1.png");
        Back_icon.loadFromFile("picture/Back.png");
        Lets_go_icon.loadFromFile("picture/let.png");
        help_icon.loadFromFile("picture/help.png");
        exit_icon.loadFromFile("picture/exit.png");
        next_icon.loadFromFile("picture/next.png");
        Arrow_icon.loadFromFile("picture/Arrow.png");
        Arrow2_icon.loadFromFile("picture/Arrow.png");
        Aghdasiyeh_icon.loadFromFile("picture/001.png");
        Azadeghan_icon.loadFromFile("picture/002.png");
        Bimeh_icon.loadFromFile("picture/003.png");
        Allameh_icon.loadFromFile("picture/000.png");
        Boostan_icon.loadFromFile("picture/004.png");
        chahar_icon.loadFromFile("picture/005.png");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    sf::RectangleShape texture_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape pag_2_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape help_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape welcome_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape user_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape back_grand_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape Lets_go_Icon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape exitIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape helpIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape BackIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape nextIcon_shape(sf::Vector2f(199, 39));
    sf::RectangleShape ArrowIcon_shape(sf::Vector2f(17, 16));
    sf::RectangleShape Arrow2Icon_shape(sf::Vector2f(17, 16));
    sf::RectangleShape AghdasiyehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape AzadeghanIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape BimehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape AllamehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape BoostanIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape chaharIcon_shape(sf::Vector2f(82, 21));

    texture_shape.setTexture(&texture);
    pag_2_shape.setTexture(&pag_2);
    help_shape.setTexture(&help);
    welcome_shape.setTexture(&welcome);
    user_shape.setTexture(&user);
    back_grand_shape.setTexture(&back_grand);
    Lets_go_Icon_shape.setTexture(&Lets_go_icon);
    exitIcon_shape.setTexture(&exit_icon);
    helpIcon_shape.setTexture(&help_icon);
    BackIcon_shape.setTexture(&Back_icon);
    nextIcon_shape.setTexture(&next_icon);
    ArrowIcon_shape.setTexture(&Arrow_icon);
    Arrow2Icon_shape.setTexture(&Arrow_icon);
    AghdasiyehIcon_shape.setTexture(&Aghdasiyeh_icon);
    AzadeghanIcon_shape.setTexture(&Azadeghan_icon);
    BimehIcon_shape.setTexture(&Bimeh_icon);
    AllamehIcon_shape.setTexture(&Allameh_icon);
    BoostanIcon_shape.setTexture(&Boostan_icon);
    chaharIcon_shape.setTexture(&chahar_icon);

    Lets_go_Icon_shape.setPosition(sf::Vector2f(24, 360));
    exitIcon_shape.setPosition(sf::Vector2f(24, 438));
    helpIcon_shape.setPosition(sf::Vector2f(24, 512));
    BackIcon_shape.setPosition(sf::Vector2f(22, 741));
    nextIcon_shape.setPosition(sf::Vector2f(90, 710));
    ArrowIcon_shape.setPosition(sf::Vector2f(322, 250));
    Arrow2Icon_shape.setPosition(sf::Vector2f(322, 328));
    AghdasiyehIcon_shape.setPosition(sf::Vector2f(261, 89));
    AzadeghanIcon_shape.setPosition(sf::Vector2f(261, 143));
    BimehIcon_shape.setPosition(sf::Vector2f(261, 170));
    AllamehIcon_shape.setPosition(sf::Vector2f(261, 116));
    BoostanIcon_shape.setPosition(sf::Vector2f(261, 197));
    chaharIcon_shape.setPosition(sf::Vector2f(261, 224));

    graph.readGraphFromFile(filename);

    sf::Font font;
    if (!font.loadFromFile("font.TTF"))
    { // Load a font
        throw runtime_error("Error: Unable to load font.");
    }
    sf::Text orgin;
    orgin.setFont(font);
    orgin.setCharacterSize(16);
    orgin.setFillColor(sf::Color::Black); // Set the text color
    orgin.setPosition(319, 44);

    while (window.isOpen())
    {
        sf ::Event event;
        sf::Vector2f mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
            {
                window.close();
            }
        }
        if (clock.getElapsedTime() < sf::seconds(2) && flag_1_page)
        {
            window.clear();
            window.draw(texture_shape);
        }
        else
        {
            flag_1_page = false;
            if (!flag)
            {
                window.clear();
                window.draw(help_shape);
                // window.setFramerateLimit(1);
                window.draw(BackIcon_shape);
            }
            else if (flag)
            {
                window.clear();
                window.draw(pag_2_shape);
                window.draw(Lets_go_Icon_shape);
                window.draw(exitIcon_shape);
                window.draw(helpIcon_shape);
            }
            if (!flag_w)
            {
                window.clear();
                window.draw(welcome_shape);
                window.draw(nextIcon_shape);
            }
            if (!falg_user)
            {

                window.clear();
                window.draw(user_shape);
                window.draw(ArrowIcon_shape);
                window.draw(Arrow2Icon_shape);
                // window.draw(orgin);
            }
            if (!flag_Arrow1)
            {
                window.clear();
                window.draw(back_grand_shape);
                window.draw(AghdasiyehIcon_shape);
                window.draw(AzadeghanIcon_shape);
                window.draw(BimehIcon_shape);
                window.draw(AllamehIcon_shape);
                window.draw(BoostanIcon_shape);
                window.draw(chaharIcon_shape);
                
            }
            if (ArrowIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    flag_Arrow1 = false;
                }
            }
            if (Lets_go_Icon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    flag_w = false;
                }
            }
            if (exitIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    window.close();
                }
            }
            if (BackIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {

                    flag = true;
                }
            }
            if (helpIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    flag = false;
                }
            }
            if (nextIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    falg_user = false;
                }
            }
        }

        window.display();
    }
}
