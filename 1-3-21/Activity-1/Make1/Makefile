TARGET=sall.out
OBJS=test.o src/Mystring.o src/Bitwise.o src/Myutils.o
TOPDIR=${PWD}

CFLAGS=-I${TOPDIR}/include

all:$(TARGET)

$(TARGET):$(OBJS)
	gcc $^ -o $@

%.o:src/%.c 

test.o:test.c

clean:
	rm -rf ${OBJS} ${TARGET}