#include <SFML/Graphics.hpp>

void window1() {
    sf::RenderWindow window1(sf::VideoMode(800, 600), "Window 1");

    sf::RectangleShape page1(sf::Vector2f(800, 600));
    page1.setFillColor(sf::Color::Blue);

    bool showPage2 = false;

    while (window1.isOpen()) {
        sf::Event event;
        while (window1.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window1.close();

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
                showPage2 = true;
        }

        if (showPage2) {
            window1.close(); // بستن صفحه اول
            break;
        }

        window1.clear();
        window1.draw(page1);
        window1.display();
    }
}

void window2() {
    sf::RenderWindow window2(sf::VideoMode(800, 600), "Window 2");

    sf::RectangleShape page2(sf::Vector2f(800, 600));
    page2.setFillColor(sf::Color::Green);

    while (window2.isOpen()) {
        sf::Event event;
        while (window2.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window2.close();
        }

        window2.clear();
        window2.draw(page2);
        window2.display();
    }
}

int main() {
    window1();
    window2();

    return 0;
}
