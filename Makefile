


all:
	bison back4.y
	gcc back4.tab.c 
	./a.out <g1.txt >salida.txt  
	gforth <salida.txt