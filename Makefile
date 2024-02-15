all: compile link 

compile:
	g++ -Isfml/include -c src/main.cpp  src/app.cpp src/game.cpp src/Graph.cpp src/Short_path.cpp  

link:
	g++ main.o app.o game.o   Short_path.o  Graph.o -o  app -Lsfml/lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio