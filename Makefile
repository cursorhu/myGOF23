CXX = g++
CFLAGS = -g

all: factory abstractFactory Singleton

factory: $(wildcard Factory/*.cpp)
	$(CXX) $(CFLAGS) -o $@ $^
abstractFactory: $(wildcard AbstractFactory/*.cpp)
	$(CXX) $(CFLAGS) -o $@ $^ 
singleton: $(wildcard Singleton/*.cpp)
	$(CXX) $(CFLAGS) -o $@ $^ 

.PHONY: clean
clean:
	rm  -f factory abstractFactory singleton
