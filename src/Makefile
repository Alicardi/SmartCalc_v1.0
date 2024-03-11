WWW = -Wall -Werror -Wextra -std=c11
LC=-lcheck
GCOV=-fprofile-arcs -ftest-coverage
UNIX = -lsubunit -lrt -lpthread -lm
SRC=$(wildcard ./backend/*.c)
FILE_TEST=tests/test.c
OS=$(shell uname -s)
TARGET=s21_calc_kidneyha

ifeq ($(OS),Linux)
	OPEN_CMD = xdg-open
endif
ifeq ($(OS),Darwin)
	OPEN_CMD = open
endif

all: clean uninstall install

install: 
	mkdir -p ../build
	cd frontend && qmake && make && make clean && rm -rf Makefile && mv $(TARGET).app ../../build/$(TARGET).app
	cp -R ../build/$(TARGET).app ~/Desktop/$(TARGET).app

uninstall:
	rm -rf ~/Desktop/$(TARGET).app ../build

dvi: 
	open CALC_README_RUS.md 

dist: 
	mkdir -p ../dist
	cp -R ../build/$(TARGET).app ../dist
	cd ../dist && tar cvzf $(TARGET)_v1.0.tgz *
	cd ../dist && rm -rf $(TARGET).app

test: clean_test
ifeq ($(OS), Darwin)
	gcc $(WWW) $(SRC) $(FILE_TEST) -o test $(LC) -lm
else
	gcc $(WWW) $(SRC) $(FILE_TEST) -o test $(LC) $(UNIX)
endif
	./test

gcov_report: clean
ifeq ($(OS), Darwin)
	gcc $(WWW) $(GCOV) $(SRC) $(FILE_TEST) -o test $(LC)
else
	gcc $(WWW) $(GCOV) $(SRC) $(FILE_TEST) -o test $(LC) $(UNIX)
endif
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	$(OPEN_CMD) ./report/index.html
	make clean_test

style:
	clang-format -style=Google -n **/*.c **/*.h **/*.cpp

clean: clean_test
	rm -rf *.o backendend/*.o *.a *.gch *.dSYM report  

clean_test:
	rm -rf *.gcda *.gcno test *.info



