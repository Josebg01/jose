# C++ options
CXX := g++
CXXFLAGS := -Wall -Wextra -Werror

# Java options
JAVAFLAGS := -Xlint -Werror

h1: h1.cc
	$(CXX) $(CXXFLAGS) -o $@ $<

H1: H1.java
	javac $(JAVAFLAGS) $<