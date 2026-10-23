students: main.cpp date.o
	g++ -g main.o date.o -o students\

main.o: main.o main.h
	g++ -g -c main.cpp

date.o: date.cpp date.h
	g++ -g -c date.cpp

run: students
	./students

clean:
	rm students
	rm *.o

debug: status
	gdb students

valgrind: students
	valgrind --leak-checkfull ./students
