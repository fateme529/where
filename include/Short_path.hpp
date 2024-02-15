#ifndef SHORTESTPATHFINDER_HPP
#define SHORTESTPATHFINDER_HPP

#include "../include/Graph.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <limits>
#include <queue>

class ShortestPathFinder
{
public:
    static void findShortestPath(Graph &graph, const std::string &sourceName, const std::string &destinationName, sf::RenderWindow &window);

private:
    static std::string transportTypeToString(TransportType transportType)
    {
        switch (transportType)
        {
        case TransportType::Metro:
            return "Metro";
        case TransportType::Bus:
            return "Bus";
        case TransportType::Taxi:
            return "Taxi";
        default:
            return "Unknown";
        }
    }
};

#endif // SHORTESTPATHFINDER_HPP
