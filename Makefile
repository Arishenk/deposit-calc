CC = gcc
MO = ./build/main.o
DO = ./build/deposit.o
MC = ./src/main.c
DC = ./src/deposit.c
.PHONY: clean all deposit-calc

all: deposit-calc

deposit-calc:$(DO) $(MO)
		$(CC) $(MO) $(DO) -o ./bin/deposit-calc

$(DO): $(DC)
	$(CC) -c $(DC) -o $(DO)

$(MO): $(MC)
	$(CC)  -c $(MC) -o $(MO)
clean:
	rm ./build/*.o
