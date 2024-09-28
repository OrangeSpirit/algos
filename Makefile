GCC= g++
WWW= -Wall -Werror -Wextra
CMD= echo "pip to pip"

clean:
	rm -rf *.out

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

retry:
	for i in {1..5}; do $(CMD) && break\
	|| sleep 3; done