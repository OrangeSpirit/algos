GCC= g++
WWW= -Wall -Werror -Wextra

clean:
	rm -rf *.out

simple_number: clean
	$(GCC) $(WWW) simple_number.cpp
	./a.out

check_multiple: clean
	$(GCC) $(WWW) check_multiple.cpp
	./a.out