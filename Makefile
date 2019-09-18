libaccesslevel.a:accesslevel.o
	ar cr libaccesslevel.a accesslevel.o
accesslevel.o:accesslevel.c accesslevel.h
	cc -c accesslevel.c
