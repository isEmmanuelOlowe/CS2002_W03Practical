all : stage1 stage2

clean :
	rm *.o stage1 stage2

stage1 : run_fib.o print_fib.o recursive_fib.o
	clang run_fib.o print_fib.o recursive_fib.o -o stage1

stage2 : run_fib.o print_fib.o iterative_fib.o
	clang run_fib.o print_fib.o iterative_fib.o -o stage2

run_fib.o : run_fib.c
	clang -c run_fib.c

print_fib.o : print_fib.c
	clang -c print_fib.c

recursive_fib.o : recursive_fib.c
	clang -c recursive_fib.c

iterative_fib.o : iterative_fib.c
	clang -c iterative_fib.c
