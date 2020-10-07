puissance4: main.o jouer.o afficher.o initialiser.o fin.o verifier.o
	gcc -o puissance4 main.o jouer.o afficher.o initialiser.o fin.o verifier.o

%.o: %.c
	gcc -o $@ $< -c

.PHONY: clean
clean:
	rm -f *.o 
