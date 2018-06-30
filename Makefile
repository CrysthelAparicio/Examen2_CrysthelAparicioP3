main:    main.cpp seleccion.o Nodo.o lista.o
	g++ main.cpp seleccion.o Nodo.o lista.o -o main
main.o:	main.cpp seleccion.h Nodo.h lista.h
	g++ -c main.cpp
Seleccion:	seleccion.cpp seleccion.h
	g++ -c seleccion.cppNodo:	Nodo.cpp Nodo.h
	g++ -c Nodo.cpp
Lista:	lista.cpp lista.h
	g++ -c lista.cpp
clean:
	rm  *.o main 