CXX = g++
CXXFLAGS = -O0 -ggdb #-stdlib=libc++

all: scribe_example

scribe_example: scribe_example.cc scribe.h
	$(CXX) $(CXXFLAGS) -o $@ $< -std=c++14

clean:
	rm -f logger_example1

.PHONY: clean all
