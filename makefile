students: main.cpp
	g++ -g main.cpp -o students\

run: students
	./students

clean:
	rm students

debug: status
	gdb students

valgrind: students
	valgrind --leak-checkfull ./students
