CXX = g++
CXXFLAGS = -std=c++14 -Wall -MMD -g
EXEC = a3q6
OBJECTS = main.o re.o
DEPENDS = ${OBJECTS:.o=.d}


${EXEC}: ${OBJECTS}
	${CXX} ${OBJECTS} -o ${EXEC}


-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${DEPENDS} ${EXEC}
