# Compile cash.c using a recipe with the name compile
CC=gcc
compile:
	$(CC) -o credit credit.c
run:
	./credit
compile_run: compile run
help:
	@echo "make compile"
	@echo "make run"
	@echo "make compile_run"
	@echo "make help"