CXX = g++
CXXFLAGS = -MMD -g
EXEC = ConnectN.out
X11FLAGS = -lX11
OBJECTS = main.o board.o player.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC} ${X11FLAGS}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
