all:
	cc calc.c main.c -o calc
run:
	cc calc.c main.c -o calc && ./calc
clean:
	rm calc
