all: test

test: build_c
	echo "PURE NODE"
	time node pure-node.js
	echo "NODE AND C"
	time node node-c.js

build_c:
	mkdir -p bin
	gcc for.c -o bin/for

run_c: build_c
	bin/for
