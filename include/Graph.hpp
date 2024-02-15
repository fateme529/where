#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Vertex.hpp"
#include <SFML/Graphics.hpp>
#include <vector>
#include <fstream>

class Graph {
private:
    std::vector<Vertex*> vertices;

public:
    ~Graph();
    void addVertex(Vertex* vertex);
    std::vector<Vertex*>& getVertices();
    void readGraphFromFile(const std::string& filename);

private:
    Vertex* getOrCreateVertex(const std::string& name, std::unordered_map<std::string, Vertex*>& vertexMap);
};

#endif // GRAPH_HPP
