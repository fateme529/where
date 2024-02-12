all: compile link 

compile:
	g++ -Isfml/include -c src/main.cpp  src/app.cpp src/game.cpp src/bus.cpp src/subway.cpp

link:
	g++ main.o app.o game.o bus.o subway.o -o  app -Lsfml/lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio