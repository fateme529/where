#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>
#include <limits>

using namespace std;

// Enum for type of vehicles


// Structure to represent a vertex in the graph



// int main() {
//     try {
//         Graph graph;
//         string filename = "input.txt";
//         graph.readGraphFromFile(filename);
//         sf::RenderWindow window(sf::VideoMode(800, 600), "Shortest Path Visualization"); // Window size
//         string originName, destinationName;
        
//         cout << "Enter the source vertex: ";
//         cin >> originName;
//         cout << "Enter the destination vertex: ";
//         cin >> destinationName;
        
//         while (window.isOpen()) {
//             sf::Event event;
//             while (window.pollEvent(event)) {
//                 if (event.type == sf::Event::Closed) {
//                     window.close();
//                 }
//             }
//             window.clear(sf::Color::White); // Clear the window
//             ShortestPathFinder::findShortestPath(graph, originName, destinationName, window); // Call Dijkstra algorithm
//             window.display(); // Display the window
//         }
//     } catch (const exception& e) {
//         cerr << e.what() << endl;
//     }
//     return 0;
// }
