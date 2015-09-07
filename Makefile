OUT = calc
BUILD = cc calc.c main.c -o $(OUT)

all:
	$(BUILD)
build_and_run:
	$(BUILD) && ./$(OUT)
clean:
	rm -f $(OUT)
