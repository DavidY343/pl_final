


all:
	bison back4.y
	gcc back4.tab.c 
	./a.out <while.txt >salida.txt  
	gforth <salida.txt