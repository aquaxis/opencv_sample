SRC = sample1.cpp
DST = sample1

PREFIX=/usr/local
INCPATH=$(PREFIX)/include
LIBPATH=$(PREFIX)/lib

CC=g++

OPT=-lopencv_highgui -lopencv_core -lopencv_imgproc

CFLAGS=-I$(INCPATH)/opencv
LDFLAGS=-L. -L$(LIBPATH)

all:
	$(CC) $(SRC) -o $(DST) $(CFLAGS) $(LDFLAGS) $(OPT)
