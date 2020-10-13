TARGET = all.out
BUILD = build
INC = -Iinc
$(TARGET): main.o myutils.o mystring.o bitmask.o
	gcc main.o myutils.o mystring.o bitmask.o -Iinc -o all.out


main.o: main.c inc/mystring.h inc/myutils.h inc/bitmask.h
	gcc -c  main.c 

myutils.o: src/myutils.c inc/myutils.h 
	gcc -c  $(INC) src/myutils.c

mystring.o: src/mystring.c inc/mystring.h
	gcc -c $(INC) src/mystring.c

bitmask.o: src/bitmask.c inc/bitmask.h
	gcc -c $(INC) src/bitmask.c

all: main.c src/myutils.c src/mystring.c src/bitmask.c  $(BUILD)
	gcc main.c src/myutils.c src/mystring.c src/bitmask.c $(INC) -o all.out
run: all.out
	./all.out
clean:
	rm *.o *.out
$(BUILD):
	mkdir build
