#include ../Make.defines


CC = gcc
CFLAGS =  -g -O2
LIBS = 


PROGS =	fifo_read fifo_write popen_example redirect_who_sort_exp

all:	${PROGS}

fifo_read: fifo_read.o
	${CC} ${CFLAGS} -o $@ fifo_read.o ${LIBS}


fifo_write: fifo_write.o
	${CC} ${CFLAGS} -o $@ fifo_write.o ${LIBS}
	
popen_example: popen_example.o
	${CC} ${CFLAGS} -o $@ popen_example.o ${LIBS}
	
redirect_who_sort_exp: redirect_who_sort_exp.o
	${CC} ${CFLAGS} -o $@ redirect_who_sort_exp.o ${LIBS}
		

clean:
		rm -f ${PROGS} ${CLEANFILES}
