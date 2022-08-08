TARGET = main.out
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c = .o)
   
${TARGET} : ${OBJS}
	gcc -o $@ $^
${OBJS} : ${SRCS}
   


