CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm

06-03-a: 06-03-a.o 
	${CC} $(LFLAGS) -o 06-03-a 06-03-a.o 

06-03-a.o 

06-03-b: 06-03-b.o 
	${CC} $(LFLAGS) -o 06-03-a 06-03-a.o 

06-03-b.o 

clean:
	rm -f *.o

veryclean: clean
	rm -f 06-03-b
	rm -f 06-03-a
	
