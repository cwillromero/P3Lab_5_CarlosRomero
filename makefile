EXE: Main.o Animales.o Patas.o Pelaje.o Ojos.o Orejas.o Cola.o Zoologico.o
	g++ Main.o Animales.o Patas.o Pelaje.o Ojos.o Orejas.o Cola.o Zoologico.o -o EXE

Main.o: Main.cpp Animales.h Patas.h Pelaje.h Ojos.h Orejas.h Cola.h
	g++ -c Main.cpp

Animales.o: Animales.h Animales.cpp Patas.h Pelaje.h Ojos.h Orejas.h Cola.h
	g++ -c Animales.cpp

Patas.o: Patas.h Patas.cpp
	g++ -c Patas.cpp

Pelaje.o: Pelaje.h Pelaje.cpp
	g++ -c Pelaje.cpp

Ojos.o: Ojos.h Ojos.cpp
	g++ -c Ojos.cpp

Orejas.o: Orejas.h Orejas.cpp
	g++ -c Orejas.cpp
Zoologico.o: Zoologico.h Zoologico.cpp Animales.h
	g++ -c Zoologico.cpp

