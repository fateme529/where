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
    sf::Texture Back_icon;
    sf::Texture Lets_go_icon;
    sf::Texture help_icon;
    sf::Texture exit_icon;

    try
    {
        texture.loadFromFile("picture/01.png");
        pag_2.loadFromFile("picture/02.png");
        help.loadFromFile("picture/03_help.png");
        welcome.loadFromFile("picture/04.png");
        Back_icon.loadFromFile("picture/Back.png");
        Lets_go_icon.loadFromFile("picture/let.png");
        help_icon.loadFromFile("picture/help.png");
        exit_icon.loadFromFile("picture/exit.png");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    sf::RectangleShape texture_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape pag_2_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape help_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape welcome_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape Lets_go_Icon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape exitIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape helpIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape BackIcon_shape(sf::Vector2f(316, 50));

    texture_shape.setTexture(&texture);
    pag_2_shape.setTexture(&pag_2);
    help_shape.setTexture(&help);
    welcome_shape.setTexture(&welcome);
    Lets_go_Icon_shape.setTexture(&Lets_go_icon);
    exitIcon_shape.setTexture(&exit_icon);
    helpIcon_shape.setTexture(&help_icon);
    BackIcon_shape.setTexture(&Back_icon);

    Lets_go_Icon_shape.setPosition(sf::Vector2f(24, 360));
    exitIcon_shape.setPosition(sf::Vector2f(24, 438));
    helpIcon_shape.setPosition(sf::Vector2f(24, 512));
    BackIcon_shape.setPosition(sf::Vector2f(22, 741));

    // زمان لازم برای انتقال به صفحه بعد (به میلی ثانیه)

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
        if (clock.getElapsedTime() < sf::seconds(2))
        {
            window.clear();
            window.draw(texture_shape);
        }
        else
        {
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
        }

        window.display();
    }
}
