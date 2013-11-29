CC := g++
CFLAGS := -g -ggdb3 -O 

SRC := $(wildcard *.cpp)
OBJ := $(patsubst %.cpp,%.o,$(SRC) )

all : raytrace
raytrace : $(OBJ)
	$(CC) -Wall $(CFLAGS) -o $@ $^

.PHONY : clean 
	rm -f *.o raytrace
