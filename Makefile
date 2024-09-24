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

retry:
	for i in {1..5}; do $(CMD) && break\
	|| sleep 3; done