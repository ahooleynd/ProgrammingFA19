all:
#mingw32-make.exe windows
windows: main.cpp
	g++.exe main.cpp -I "..\..\SFML-2.5.1\include" -lsfml-system -lsfml-graphics -lsfml-window -lsfml-audio -L "..\..\SFML-2.5.1\build\lib"

mac: main.cpp
	g++ main.cpp -I../Libraries -I../Header -lsfml-system -lsfml-graphics -lsfml-window -lsfml-audio
