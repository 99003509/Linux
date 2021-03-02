
TARGET=sall.out
OBJS=test.o src/Mystring.o  src/Bitmask.o src/Myutils.o

TOPDIR=${PWD}
CFLAGS=-I${TOPDIR}/include
LDFLAGS=-lMystring -lMyutils -lBitmask
LIBPATH=${PWD}

all:sall.outMy

sall.out:test.o libMystring.a libMyutils.a libBitmask.a
	gcc -L${LIBPATH} $< -o $@ ${LDFLAGS} -static
libMystring.a:src/Mystring.o 
	ar rc $@ $^
libMyutils.a:src/Myutils.o 
	ar rc $@ $^
libBitmask.a:src/Bitmask.o 
	ar rc $@ $^
%.o:src/%.c include/%.h

test.o: test.c include/*.h

test:
	./sall.out

clean:
	rm -rf *.a *.o src/*.o ${TARGET}