CC = g++

main.out : main.o hello.o
	${CC} main.cpp hello.cpp -o $@

main.o : main.cpp
	${CC} -c $^ -o $@

hello.o : hello.cpp
	${CC} -c $^ -o $@
