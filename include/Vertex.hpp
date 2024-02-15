#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <SFML/Graphics.hpp>
#include <unordered_map>

enum class TransportType {
    Metro,
    Bus,
    Taxi,
};

class Vertex {
private:
    std::string name;
    std::unordered_map<Vertex*, std::pair<int, TransportType>> neighbors;
    sf::CircleShape shape;

public:
    Vertex(const std::string& name);
    std::string getName() const;
    void addNeighbor(Vertex* neighbor, int weight, TransportType transportType);
    const std::unordered_map<Vertex*, std::pair<int, TransportType>>& getNeighbors() const;
    sf::CircleShape& getShape();
};

#endif // VERTEX_HPP
