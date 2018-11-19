# cgo_cplusplus

This example is from http://bastengao.com/blog/2017/12/go-cgo-cpp.html

To run the example, follow:
1 cd foo, and do:
  g++ -c foo.cpp
  g++ -c bridge.c
  ar -crs libfoo.a foo.o bridge.o

2 cd ../foo
  go run main.go /  go build -o run && ./run
