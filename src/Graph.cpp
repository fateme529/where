#include "../include/Graph.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

Vertex::Vertex(const std::string& name) : name(name) {}

std::string Vertex::getName() const {
    return name;
}

void Vertex::addNeighbor(Vertex* neighbor, int weight, TransportType transportType) {
    neighbors.insert({neighbor, std::make_pair(weight, transportType)});
}

const std::unordered_map<Vertex*, std::pair<int, TransportType>>& Vertex::getNeighbors() const {
    return neighbors;
}

Graph::~Graph() {
    for (Vertex* vertex : vertices) {
        delete vertex;
    }
}

void Graph::addVertex(Vertex* vertex) {
    vertices.push_back(vertex);
}

std::vector<Vertex*>& Graph::getVertices() {
    return vertices;
}

void Graph::readGraphFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Error: Unable to open the file.");
    }
    std::unordered_map<std::string, Vertex*> vertexMap;
    std::string line;
    while (getline(file, line)) {
        std::istringstream iss(line);
        std::string originName, destName;
        int weight;
        int transportTypeInt;
        if (iss >> originName >> destName >> weight >> transportTypeInt) {
            Vertex* originVertex = getOrCreateVertex(originName, vertexMap);
            Vertex* destVertex = getOrCreateVertex(destName, vertexMap);
            TransportType transportType;
            switch (transportTypeInt) {
                case 1:
                    transportType = TransportType::Metro;
                    break;
                case 2:
                    transportType = TransportType::Bus;
                    break;
                case 3:
                    transportType = TransportType::Taxi;
                    break;
                default:
                    throw std::invalid_argument("Invalid transport type.");
            }
            originVertex->addNeighbor(destVertex, weight, transportType);
        }
    }
    file.close();
}

Vertex* Graph::getOrCreateVertex(const std::string& name, std::unordered_map<std::string, Vertex*>& vertexMap) {
    if (vertexMap.find(name) == vertexMap.end()) {
        Vertex* vertex = new Vertex(name);
        vertices.push_back(vertex);
        vertexMap[name] = vertex;
        return vertex;
    }
    return vertexMap[name];
}
