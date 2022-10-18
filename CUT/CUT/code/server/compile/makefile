CFLAGS = -c -Wall -g -I${INC}
SRC = ../src
INC = ../include
BIN = ../bin
OBJ = ../obj

all: 
	gcc ${CFLAGS} ${SRC}/ftserve.c -o ${OBJ}/ftserve.o 
	gcc ${CFLAGS} ${SRC}/common.c -o ${OBJ}/common.o
	gcc ${OBJ}/ftserve.o ${OBJ}/common.o -o ${BIN}/ftserve.exe 
prof:
	gcc -pg -I{INC} ${SRC}/ftserve.c ${SRC}/common.c -o ${BIN}/ftserve

clean:
	@rm ${OBJ}/ftserve.o ${OBJ}/common.o  ${BIN}/ftserve.exe ${BIN}/ftserve
	@echo Done cleaning
