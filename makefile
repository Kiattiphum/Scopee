compile: main.c 
	 gcc main.c -o tiger

run: tiger
	 ./tiger

clean: tiger
	 rm tiger