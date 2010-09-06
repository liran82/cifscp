CFLAGS=-g -std=c99 -Wall -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64
LDFLAGS=
SRCS=cifscp.c flow.c human.c uri.c cifs_spider.c cookie.c
PREFIX=${HOME}

all: libs cifscp

libs:
	make -C libcifs

install: all
	install cifscp ${PREFIX}/bin/

.c.o:
	${CC} ${CFLAGS} -c -o $@ $<

cifscp: cifscp.o flow.o human.o uri.o libcifs/libcifs.a
	$(CC) $(LDFLAGS) -o $@ $^

cifscat: cookie.o uri.o libcifs/libcifs.a
	$(CC) $(LDFLAGS) -o $@ $^

cifs_spider: cifs_spider.o uri.o libcifs/libcifs.a
	$(CC) $(LDFLAGS) -o $@ $^

fusecifs: fusecifs.o libcifs/libcifs.a
	${CC} ${LDFLAGS} -o $@ $^

clean:
	rm -f *.o cifsmirror cifscp tags fusecifs
	make -C libcifs clean

distclean: clean
	rm -f .depends
	make -C libcifs distclean

dist: distclean
	cd .. ;	tar czf "cifsget_`date +%Y-%m-%d_%H%M`.tgz" cifsget

dep .depends:
	$(CC) -MM $(CFLAGS) $(SRCS) 1> .depends

include .depends

