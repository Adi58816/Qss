exec = q.out
sources = $(wildcard src/*.cpp)
objects = $(sources: .cpp=.o)
flags = -g

$(exec): $(object)
	g++ $(objects) $(flags) -o $(exec)

%.o: %.cpp include/%.hpp
	g++ -c $(flags) $< -o $@

install:
	make
	cp ./q.out /usr/local/bin/q

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o