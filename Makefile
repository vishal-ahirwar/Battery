# bat_limiter.c
CC=gcc	#compiler
DESTDIR=/usr/bin

TARGET=vbat
all:
	$(CC) bat_limiter.c -o $(TARGET)
clean:
	rm $(TARGET)

install:${TARGET}
	mkdir -p ${DESTDIR}
	cp ${TARGET} ${DESTDIR}
