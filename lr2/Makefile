#compiler
CC=gcc
#flags for the compilation
CFLAGS=-c -Wall

all: menu

menu: main.o menu.o index_first_negative.o index_last_negative.o sum_before_and_after_negative.o sum_between_negative.o
	$(CC) main.o menu.o index_first_negative.o index_last_negative.o sum_before_and_after_negative.o sum_between_negative.o -o menu

main.o: main.c menu.h
    $(CC) $(CFLAGS) main.c

menu.o: menu.c index_first_negative.h index_last_negative.h sum_before_and_after_negative.h sum_between_negative.h
	$(CC) $(CFLAGS) menu.c

index_first_negative.o: index_first_negative.c index_first_negative.h
	$(CC) $(CFLAGS) index_first_negative.c

index_last_negative.o: index_last_negative.c index_last_negative.h
	$(CC) $(CFLAGS) index_last_negative.c

sum_before_and_after_negative.o: sum_before_and_after_negative.c sum_before_and_after_negative.h index_first_negative.h index_last_negative.h
	$(CC) $(CFLAGS) sum_before_and_after_negative.c

sum_between_negative.o: sum_between_negative.c sum_between_negative.h index_first_negative.h index_last_negative.h
	$(CC) $(CFLAGS) sum_between_negative.c


clean:
	rm -rf *.o menu
