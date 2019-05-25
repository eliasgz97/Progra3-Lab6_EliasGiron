main.out: main.o Motor.o Chasis.o Pintura.o Carro.o 
	g++ main.o Motor.o Chasis.o Pintura.o Carro.o -o main.out
main.o: main.cpp Carro.h Chasis.h Motor.h Pintura.h
	g++ -c main.cpp
Motor.o: Motor.cpp Motor.h
	g++ -c Motor.cpp
Chasis.o: Chasis.h Chasis.cpp
	g++ -c Chasis.cpp
Pintura.o: Pintura.h Pintura.cpp
	g++ -c Pintura.cpp
Carro.o: Carro.cpp Carro.h Motor.h Motor.cpp Chasis.h Chasis.cpp Pintura.h Pintura.cpp
	g++ -c Carro.cpp

				