SRC_DIR = lab1

explode: main.o lab1.o
	gcc -o explode main.o lab1.o

main.o: $(SRC_DIR)/main.c
	gcc -c (SRC_DIR)/main.c

lab1.o: $(SRC_DIR)/lab1.c
	gcc -c (SRC_DIR)/lab1.c

clean:
	rm *.o explode
