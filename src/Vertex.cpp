#include "../include/Vertex.hpp"

Vertex::Vertex(const std::string& name) : name(name) {
    shape.setRadius(10);
    shape.setFillColor(sf::Color::Blue);
}

std::string Vertex::getName() const {
    return name;
}

void Vertex::addNeighbor(Vertex* neighbor, int weight, TransportType transportType) {
    neighbors.insert({neighbor, std::make_pair(weight, transportType)});
}

const std::unordered_map<Vertex*, std::pair<int, TransportType>>& Vertex::getNeighbors() const {
    return neighbors;
}

sf::CircleShape& Vertex::getShape() {
    return shape;
}
