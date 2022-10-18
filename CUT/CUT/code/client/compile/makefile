CFLAGS = -c -Wall -g -I${INC}
SRC = ../src
INC = ../include
BIN = ../bin
OBJ = ../obj

all: 
	gcc ${CFLAGS} ${SRC}/ftclient.c -o ${OBJ}/ftclient.o 
	gcc ${CFLAGS} ${SRC}/common.c -o ${OBJ}/common.o
	gcc ${OBJ}/ftclient.o ${OBJ}/common.o -o ${BIN}/ftclient.exe
prof:
	gcc -pg -I${INC} ${SRC}/ftclient.c ${SRC}/common.c -o ${BIN}/ftclient
clean:
	@rm ${OBJ}/ftclient.o ${OBJ}/common.o  ${BIN}/ftclient.exe ${BIN}/ftclient
	@echo Done cleaning
