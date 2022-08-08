
OBJ:=$(patsubst %.c, %.o, $(wildcard *.c))
slist.out : $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.out
