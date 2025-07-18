CC = gcc
CFLAGS = -O
all: build/qr

build/qr: src/qr.c
	gcc -o build/qr src/qr.c
clean:
	-@rm -f build/qr test.svg
test: build/qr
	@./build/qr
	cat ./test.svg
.PHONY: all clean
