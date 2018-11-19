package main

// #cgo CFLAGS: -I./foo
// #cgo LDFLAGS:  -L./foo -lfoo -lstdc++
// #include "bridge.h"
import "C"

func main() {
	C.bar()
}
