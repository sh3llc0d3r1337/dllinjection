
BIN=bin
OBJ=obj
INC=inc
SRC=src


# Use the next two lines if you want to compile for 64 bit
#TARGET=test64.dll
#CC=x86_64-w64-mingw32-g++

# Use the next two lines if you want to compile for 32 bit
TARGET=test32.dll
CC=i686-w64-mingw32-g++

FLAGS_COMPILE=-I$(INC) -municode
FLAGS_LINK=-municode -static -shared

HEADERS = $(wildcard $(INC)/*.h)
OBJECTS = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(wildcard $(SRC)/*.cpp))


.PHONY: all clean


all: $(BIN)/$(TARGET)

$(BIN)/$(TARGET): $(OBJECTS)
	mkdir -p $(BIN)
	$(CC) $(OBJECTS) -o $@ $(FLAGS_LINK)

$(OBJ)/%.o: $(SRC)/%.cpp $(HEADERS)
	mkdir -p $(OBJ)
	$(CC) $< -o $@ -c $(FLAGS_COMPILE)


clean:
	rm -fr $(OBJ)
	rm -fr $(BIN)

