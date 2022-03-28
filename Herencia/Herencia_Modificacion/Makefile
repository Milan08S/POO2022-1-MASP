 all: compilar
compilar: figura circulo cuadrado rectangulo triangulo main
	g++ -o Salida figura.o cuadrado.o circulo.o rectangulo.o Triangulo.o main.o
figura: figura.cpp figura.h
	g++ -c figura.cpp
circulo: circulo.cpp circulo.h figura.h
	g++ -c circulo.cpp
cuadrado: cuadrado.h cuadrado.cpp figura.h
	g++ -c cuadrado.cpp
rectangulo: rectangulo.h rectangulo.cpp figura.h
	g++ -c rectangulo.cpp
triangulo: Triangulo.h Triangulo.cpp figura.h
	g++ -c Triangulo.cpp
main: main.cpp rectangulo.h cuadrado.h circulo.h Triangulo.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o