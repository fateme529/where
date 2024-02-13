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
    // sf::sleep(sf::seconds(5));
    sf::Texture texture;
    sf::Texture pag_2;
    sf::Texture Lets_go_icon;
    sf::Texture help_icon;
    sf::Texture exit_icon;

    try
    {
        texture.loadFromFile("picture/01.png");
        pag_2.loadFromFile("picture/02.png");
        Lets_go_icon.loadFromFile("picture/let.png");
        help_icon.loadFromFile("picture/exit.png");
        exit_icon.loadFromFile("picture/help.png");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    sf::RectangleShape texture_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape pag_2_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape Lets_go_Icon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape exitIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape helpIcon_shape(sf::Vector2f(316, 50));

    texture_shape.setTexture(&texture);
    pag_2_shape.setTexture(&pag_2);
    Lets_go_Icon_shape.setTexture(&Lets_go_icon);
    exitIcon_shape.setTexture(&exit_icon);
    helpIcon_shape.setTexture(&help_icon);

    Lets_go_Icon_shape.setPosition(sf::Vector2f(24, 360));
    exitIcon_shape.setPosition(sf::Vector2f(24, 438));
    helpIcon_shape.setPosition(sf::Vector2f(24, 512));

    // زمان لازم برای انتقال به صفحه بعد (به میلی ثانیه)
    sf::Time delayTime = sf::seconds(5);
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
            window.clear();
            window.draw(pag_2_shape);
            window.draw(Lets_go_Icon_shape);
            window.draw(exitIcon_shape);
            window.draw(helpIcon_shape);

            if (Lets_go_Icon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    // game.runGame(window);
                    window.close();
                }
            }
            else if (exitIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    window.close();
                }
            }
            else if (helpIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    window.close();
                }
            }
        }

        window.display();
    }
}
