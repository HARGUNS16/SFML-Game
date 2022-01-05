all: compile link

compile:
	g++ -I src/include -c main.cpp
	g++ -I src/include -c Game.cpp
link:
	g++ main.o -o main -L src/lib -l sfml-graphics -l sfml-window -l sfml-system 
	g++ Game.o -o Game -L src/lib -l sfml-graphics -l sfml-window -l sfml-system -l sfml-audio -l sfml-network
	