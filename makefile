bank: bank.o
	gcc bank.o -o bank

bank.o: bank.c
	gcc -c bank.c -o bank.o