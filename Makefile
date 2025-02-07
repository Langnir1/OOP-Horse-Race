CXX = g++

SRC = main.cpp Horse.cpp

TARGET = my_program

all:
	$(CXX) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
