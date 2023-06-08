CC=g++

TARGET = fibprint

OBJ = main.o fib.o

CFLAGES = -c -Wall

$(TARGET):$(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGES) $< -o $@


.PHONY:clean
clean:
	rm -r *.o fibprint
