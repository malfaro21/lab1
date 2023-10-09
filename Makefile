TARGET = _explode_

all: $(TARGET)

$(TARGET): lab1.o main.o
	$(CC) -o $(TARGET) $^

lab1.o: lab1.c lab1.h
	gcc -c $<

main.o: main.c lab1.h
	gcc -c $<

clean:
	rm -f *.o $(TARGET)
	