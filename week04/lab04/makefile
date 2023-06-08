

# hello:factorial.cpp main.cpp printhello.cpp
# 	g++ -o hello main.cpp factorial.cpp printhello.cpp

# 我们可以在makefile中使用变量来提高效率

SRC_DIR= ./src
SOURCE = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SOURCE))
TARGET = hello
INCLUDE = -I./inc

CC = g++

CFLAGES = -c -Wall


$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)
%.o: %.cpp
	$(CC) $(CFLAGES) $< -o $@ $(INCLUDE)

# OBJ = main.o printhello.o factorial.o

# $(TARGET): $(OBJ)
# 	$(CC) -o $(TARGET) $(OBJ)

# main.o : main.cpp
# 	$(CC) -c main.cpp

# printhello.o : printhello.cpp
# 	$(CC) -c printhello.cpp

# factorial.o : factorial.cpp
# 	$(CC) -c factorial.cpp


# $(TARGET) : $(OBJ)
# 	$(CC) -o $@ $(OBJ)

# %.o : %.cpp
# 	$(CC) $(CFLAGES) $< -o $@

# SRC = $(wildcard ./*.cpp)
# OBJ = $(patsubst %.cpp, %.o, $(SRC))
# target:
# 	@echo $(SRC)
# 	@echo $(OBJ)

.PHONY:clean
# clean:
# 	rm -r *.o $(TARGET)
clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)