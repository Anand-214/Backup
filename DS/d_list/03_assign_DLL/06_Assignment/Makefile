TARGET = main.out
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

${TARGET}:${OBJS}
	gcc -o ${TARGET} ${OBJS}
${OBJS}:${SRCS}
	gcc -c ${SRCS}
clean:
	rm ${OBJS} ${TARGET}

