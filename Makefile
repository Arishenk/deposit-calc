CC = gcc
MO = ./build/src/main.o
DO = ./build/src/deposit.o
MC = ./src/main.c
DC = ./src/deposit.c
DH = ./src/deposit.h
MT = ./test/main.c
DT = ./test/deposit-test.c
VT = ./test/validation-test.c
MTO = ./build/test/main.o
DTO = ./build/test/deposit-test.o
VTO = ./build/test/validation-test.o
.PHONY: clean all deposit-calc test

all: dc test 

dc: $(DO) $(MO)
	$(CC) $(MO) $(DO) -o ./bin/deposit-calc

$(DO): $(DC)
	$(CC) -c $(DC) -o $(DO)

$(MO): $(MC)
	$(CC)  -c $(MC) -o $(MO)

test :
	make bin/deposit-calc-test
	./bin/deposit-calc-test
	
bin/deposit-calc-test : $(MTO) $(DTO)
	$(CC) $(MTO) $(DTO) build/test/deposit.o -o bin/deposit-calc-test $(CFLAGS)

$(MTO) : $(DH) $(MT)
	$(CC) -I thirdparty -c $(MT) -o $(MTO)
	$(CC) -c $(DC) -o build/test/deposit.o  

$(DTO) : $(DH) $(DT)
	$(CC) -c -I thirdparty $(DT) -o $(DTO) 

build/test/deposit.o : $(DH) $(DC)
	$(CC) -c $(DC) -o build/test/deposit.o 

clean:
	rm ./build/test/*.o
	rm ./build/src/*.o
	rm -rf bin/deposit-calc bin/deposit-calc-test

	
