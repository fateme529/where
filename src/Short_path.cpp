#include "../include/Short_path.hpp"
using namespace std;

void ShortestPathFinder::findShortestPath(Graph& graph, const string& sourceName, const string& destinationName, sf::RenderWindow& window) {
    // Retrieve source and destination vertices
    Vertex* origin = nullptr;
    Vertex* destination = nullptr;
    for (Vertex* vertex : graph.getVertices()) {
        if (vertex->getName() == sourceName) {
            origin = vertex;
        } else if (vertex->getName() == destinationName) {
            destination = vertex;
        }
    }
    if (!origin) {
        cerr << "Error: origin vertex not found." << endl;
        return;
    }
    if (!destination) {
       cerr << "Error: Destination vertex not found." << endl;
        return;
    }
    // Array for shortest distance to each vertex
  unordered_map<Vertex*, int> distance;
    for (Vertex* vertex : graph.getVertices()) {
        distance[vertex] = numeric_limits<int>::max();
    }
    distance[origin] = 0;
    // Priority queue for vertices to be explored
    priority_queue<pair<int, Vertex*>, vector<pair<int, Vertex*>>,greater<pair<int, Vertex*>>> pq;
    pq.push({0, origin});
    // Map to store parent vertices
    unordered_map<Vertex*, Vertex*> parent;
    while (!pq.empty()) {
        Vertex* u = pq.top().second;
        int dist = pq.top().first;
        pq.pop();
        if (u == destination) {
            break;
        }
        // Explore neighbors of the current vertex
        for (auto& neighbor : u->getNeighbors()) {
            Vertex* v = neighbor.first;
            int weight = neighbor.second.first;
            if (dist + weight < distance[v]) {
                distance[v] = dist + weight;
                pq.push({distance[v], v});
                parent[v] = u;
            }
        }
    }

    // Print and draw information about the shortest path
    vector<std::string> shortestPathNodes;
    vector<std::string> transportTypes;
    int totalNodesInShortestPath = 0;
    Vertex* current = destination;
    while (parent.find(current) != parent.end()) {
        shortestPathNodes.push_back(current->getName());
        transportTypes.push_back(transportTypeToString(current->getNeighbors().at(parent[current]).second));
        totalNodesInShortestPath++;
        current = parent[current];
    }
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        throw runtime_error("Error: Unable to load font.");
    }
    sf::Text pathInfo;
    pathInfo.setFont(font);
    pathInfo.setCharacterSize(16);
    pathInfo.setFillColor(sf::Color::Black);
    pathInfo.setPosition(10, 10);
    pathInfo.setString("Shortest Path: ");
    for (int i = shortestPathNodes.size() - 1; i >= 0; --i) {
        pathInfo.setString(pathInfo.getString() + shortestPathNodes[i] + " (" + transportTypes[i] + ")");
        if (i > 0) {
            pathInfo.setString(pathInfo.getString() + " -> ");
        }
    }
    pathInfo.setString(pathInfo.getString() + "\nTotal Nodes: " + to_string(totalNodesInShortestPath));
    window.draw(pathInfo);

    // Print source and destination
    sf::Text originText;
    originText.setFont(font);
    originText.setCharacterSize(16);
    originText.setFillColor(sf::Color::Black);
    originText.setPosition(10, 50);
    originText.setString("Source: " + sourceName);
    window.draw(originText);

    sf::Text destinationText;
    destinationText.setFont(font);
    destinationText.setCharacterSize(16);
    destinationText.setFillColor(sf::Color::Black);
    destinationText.setPosition(10, 70);
    destinationText.setString("Destination: " + destinationName);
    window.draw(destinationText);
}
