package temp
//#include "c_wrapper.h"
import "C"
import "fmt"
func Add (a, b int) {
  px :=  C.NewX(C.int(a))
  C.Plus(px)
  var n int32 = int32(C.Func(px, C.int(b)))
  fmt.Println(n)
  C.Delete(px)
}


