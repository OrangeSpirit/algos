CC= gcc
GCC= g++ -std=c++17
DUMP= g++ -fdump-class-hierarchy
WWW= -Wall -Werror -Wextra
CMD= echo "pip to pip"

clean:
	rm -rf *.out

valgrind_a.out:
	valgrind --tool=memcheck --leak-check=yes	./a.out

simple_number: clean
	$(GCC) $(WWW) simple_number.cpp
	./a.out

check_multiple: clean
	$(GCC) $(WWW) check_multiple.cpp
	./a.out

drobi: clean
	$(GCC) $(WWW) drobi.cpp
	./a.out

hig: clean
	$(GCC) $(WWW) hig.cpp
	./a.out

string: clean
	$(GCC) $(WWW) string.cpp
	./a.out

pair: clean
	$(GCC) $(WWW) pair.cpp
	./a.out

sizeof: clean
	$(GCC) $(WWW) sizeof.cpp
	./a.out

reinterpret: clean
	$(GCC) $(WWW) reinterpret.cpp
	./a.out

array: clean
	$(GCC) $(WWW) array.cpp
	./a.out

resheto: clean
	$(GCC) $(WWW) resheto.cpp
	./a.out

append: clean
	$(GCC) $(WWW) append.cpp
	./a.out

sorted: clean
	$(GCC) $(WWW) sorted.cpp
	./a.out

malloc: clean
	$(CC) $(WWW) malloc.c
	./a.out

struct: clean
	$(GCC) $(WWW) struct.cpp
	./a.out

2array: clean
	$(GCC) $(WWW) 2array.cpp
	./a.out

3array: clean
	$(GCC) $(WWW) 3array.cpp
	./a.out

7array: clean
	$(GCC) $(WWW) 7array.cpp
	./a.out

shift: clean
	$(GCC) $(WWW) shift.cpp
	./a.out

strlen: clean
	$(GCC) $(WWW) strlen.cpp
	./a.out

strstr: clean
	$(GCC) $(WWW) strstr.cpp
	./a.out

strstr_shot: clean
	$(GCC) $(WWW) strstr_shot.cpp
	./a.out

reference: clean
	$(GCC) $(WWW) reference.cpp
	./a.out

fstream: clean
	$(GCC) $(WWW) fstream.cpp
	./a.out

person: clean
	$(GCC) $(WWW) person.cpp
	./a.out

dump_person: clean
	$(DUMP) person.cpp
	./a.out

retry:
	for i in {1..5}; do $(CMD) && break\
	|| sleep 3; done